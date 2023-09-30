// LMB_DSA ... implementing a lexicon structure using hash table using collision-resolution by open addressing
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>
using namespace std;
int N;

class lexicon{
    public:
    string *A;
    string **T;
    int id_A = 0;
    int id_T = 0;

    void createHashTable(int size){
        //cout << "in creation \n";

        A = new string[15 * N];
        T = new string*[N];

        for (int i = 0; i< 15*N; i++) 
        {
            A[i] = ' ';
        }
        for (int i = 0; i < N; i++){
            T[i] = nullptr;
        }
        id_A = 0;
        id_T = 0;

        return;
    }

    void print_tab(int N) {
    cout << "T: \t \t \t \t";
    cout << "A: \t";

    for (int i = 0; i < id_A; i++) {
    cout << A[i];
}
    cout << endl;

    for (int i=0; i < N; i++){
        if (T[i] != nullptr && T[i]!=0) {
            int index = T[i] - A;
            cout << i << ":\t" << index  << endl;
        } 
        else{
            cout << i << ":\t" << endl;
        }
    }

    
    cout << endl;
    }


    void insert(int size, string val){
        int sum = 0;
        int pos = id_A;
        for (char c : val) {
            A[id_A] = c;
            sum += (int)c;
            id_A++;
        }
        A[id_A-1] = '/';
        

        int hash_ind = (sum - 4) % N;
        int p_i = 0;
        if (hash_ind < N){
        while (T[hash_ind] != nullptr && T[hash_ind]!=0) {
            hash_ind = (hash_ind + p_i * p_i) % N;
            p_i++;
        }
        T[hash_ind] = &A[pos]; 
        id_T++;
        }
        else{

            N= 2*N;
            for (int i = 0; i < N; i++){
            T[i] = nullptr;
        }

        for (int i = id_A; i< 15*N; i++) 
        {
            A[i] = ' ';
        }


        id_T = 0;
        sum = 0;
            for (char d : *A){
                if (d != ' '){
                if (d!= '/'){
                    sum += (int)d;
                }
                else{
                    int hash_ind = (sum - 4) % N;
                    p_i =0;
                      while (T[hash_ind] != nullptr && T[hash_ind]!=0) {
                            hash_ind = (hash_ind + p_i * p_i) % N;
                            p_i++;
                            break;
                            }
                            T[hash_ind] = &A[pos]; 
                            id_T++;  
                            sum =0;
                            int m=0;
                            cout << m++;
                            
                }
                
                }
                
             }
        }

        return;
    }
    

    //Search
  
    int search(int size, string val) { 
    int sum = 0;
    const int t_size = val.length();
    string temp[30];
    int i = 0;
    
    for (char c : val) {
        sum += (int)c;
        temp[i] = c;
        i++;
    }
    int hash_ind = (sum - 4) % N;
    //cout<< hash_ind << endl;
    int p_i = T[hash_ind] - A ;
    while (T[hash_ind] != nullptr) { 

         if (T[hash_ind]== &A[p_i]){        // comparing the address of the strings
            cout <<  val;
            cout  << "\t Found " <<" at slot " << hash_ind << endl;
            return hash_ind;
         }
       
        
        hash_ind = (hash_ind + p_i * p_i) % N;
        p_i++;
    }
    cout << "Not Found " << val << endl;
    return 0;
}
    //Search ends

    //Deletion starts
    void deletion(int size, string val){
        int hash_i = search(N, val);
        int pos_A = T[hash_i] - A;
        if (hash_i !=0){
            T[hash_i] = 0;
        while (A[pos_A]!="/"){
            A[pos_A]="*";
            pos_A++;
        }
        cout << val;
        }
        else{
            cout << val << "not in table" << endl;
        }


    }

    //Deletion ends
    


    };

int main(int argc,char **argv) {
    string inp_file, i_temp, action, value = "";
    int choice;
    lexicon L;
    if (!argv[1]){
        cout << "Input file is missing \n";
    }
    inp_file = argv[1]; // assigning the input file name to inp_file  variable

    ifstream rd_file(inp_file); // opening the input file
    //cout << inp_file << "\n";
    if(!rd_file) // checking if the file is existing
	{
		cout << inp_file << " is not open. Check file name \n";
	}

    while (getline(rd_file, i_temp)){ // reading the input file line by line
        int len = sizeof(i_temp);
        action = i_temp.substr(0,2); //adding first two characters of the input line to action
        choice = stoi(action); // converting action to integer

        if (choice != 13)
        {
            value = i_temp.substr(3, len);
        }
        switch (choice)
        {
            case 10: // calling insert. Double the size if hash table overflows
                cout << "Inserted " << value << endl;
                L.insert(N, value);
                break;

            case 11: //delete from hash table, change the slot to deleted and change the value to ** in array
                L.deletion(N, value);
                cout << "deleted " << value << endl;
                break;

            case 12: //search
                
                L.search(N, value);
                //cout << "Found" << value << "at " << choice <<endl;
                break;

            case 13: //Print
                cout << "Printing\n";
                L.print_tab(N);
                break;

            case 14: //create hash table with given size and array with 15N. Initialize hash table to NULL and array with spaces
                cout << "Creating hash table with size "<< value << "\n";
                N = stoi(value);
                L.createHashTable(N);
                break;
            
            case 15: //comment
                cout << value <<"\n";
                break;

            default:
                cout << "No action for " << choice << "\n";
                cout << "Choose 10(to Insert), 11( to Delete), 12(to Search), 13(to Print), 14(to Create), 15(to Comment) \n";
                break;
        }
    }

    rd_file.close();

    return 0;
}
