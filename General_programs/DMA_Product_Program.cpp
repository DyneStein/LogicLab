#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    string **Main_Array = nullptr;
    string *main = nullptr;
    int i = 0;
    int input;
    int backup;
    
while (true) {
        
cout<<endl<<"PLease select one of the options : "<<endl;
cout<<"1 for addition of new product."<<endl;
cout<<"2 for displaying all products."<<endl;
cout<<"3 for categorically displaying all products."<<endl;
cout<<"4 to exit the program."<<endl;
cin>>input;
        
        
        //addition
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

if (input==1) {
    string **array = new string*[i + 1];
    
    for (int j = 0; j < i; j++) {
        array[j] = new string[9];
        for(int t=0;t<9;t++){
        array[j][t] = Main_Array[j][t];
        }
    }
    
    
    array[i] = new string[9];
    

    // Entering the details
    cout<<"write 'exit' to exit the operation OR 'name' to re-enter the name."<<endl<<endl;
    cout<< "Enter the name of the product: ";
    getline(cin, array[i][0]); 
    
    while(array[i][0]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
        
        if(array[i][0]!="name")
        break;
    }
    if(array[i][0]=="exit")
    {
        return 0;
    }
    
    
    
    
    
int h = 0;
while(h<i)
{
    if(array[h][0]==array[i][0])
    {
    cout<<"Product with same names is not allowed. ";
    cout<<endl<<"PLease re-enter the name : ";
    getline(cin, array[i][0]); h = 0;
    continue; }
    
    
    h++;
}
    
    
    
    
    cout<<"Enter the category of the product: ";
    getline(cin, array[i][1]);

    while(array[i][1]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]);
        if(array[i][0]!="name")
        { cout<<"Enter the category of the product: ";
          getline(cin, array[i][1]); 
            break;}
        
    }
    if(array[i][1]=="exit")
    {
        return 0;
    }





    cout<<"Enter the code of the product: ";
    getline(cin, array[i][2]);

    while(array[i][2]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]);
           if(array[i][0]!="name")
           { cout<<"Enter the code of the product: ";
          getline(cin, array[i][2]); 
               
               break;}
    }
    if(array[i][2]=="exit")
    {
        return 0;
    }





    cout<<"Enter the Vendor of the product: ";
    getline(cin, array[i][3]);

    while(array[i][3]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
        { cout<<"Enter the Vendor of the product: ";
          getline(cin, array[i][3]); 
            
            break;}
        
    }
    if(array[i][3]=="exit")
    {
        return 0;
    }





    cout<<"Enter the Manufacture date of the product: ";
    getline(cin, array[i][4]);
    
    while(array[i][4]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
        { cout<<"Enter the Manufacture date of the product: ";
          getline(cin, array[i][4]); 
            break;}
        
    }
    if(array[i][4]=="exit")
    {
        return 0;
    }





    cout<<"Enter the expiration date of the product: ";
    getline(cin, array[i][5]);

    while(array[i][5]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
            { cout<<"Enter the expiration date of the product: ";
                getline(cin, array[i][5]);
                break;}
        
    }
    if(array[i][5]=="exit")
    {
        return 0;
    }





    cout<<"Enter the Receiving date of the product: ";
    getline(cin, array[i][6]);

    while(array[i][6]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
        { cout<<"Enter the Receiving date of the product: ";
            getline(cin, array[i][6]);
            break;}
        
    }
    if(array[i][6]=="exit")
    {
        return 0;
    }




    cout<<"Enter the Quantity of the product: ";
    getline(cin, array[i][7]);

    while(array[i][7]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
        {cout<<"Enter the Quantity of the product: ";
    getline(cin, array[i][7]);
                break;}
        
    }
    if(array[i][7]=="exit")
    {
        return 0;
    }



    cout<<"Enter the Price of the product: ";
    getline(cin, array[i][8]);

    while(array[i][8]=="name"){
        cout<<endl<<"Enter the name of the product: ";
        getline(cin, array[i][0]); 
           if(array[i][0]!="name")
           { cout<<"Enter the Price of the product: ";
             getline(cin, array[i][8]);
               break;}
        
    }
    if(array[i][8]=="exit")
    {
        return 0;
    }


    // Update Main_Array
    delete[] Main_Array;
    Main_Array = array;

    array = nullptr;
}
else if(input==2)
{
    backup = i;
    
    cout<<endl<<"The details are: " << endl;
    for (int t = 0; t <= 8; t++) {
        
        for (int j = 0; j <i; j++) {
            cout << Main_Array[j][t] << "      ";
        }
        cout << endl;
    }
    
    
i = backup;
continue;
    
}
else if(input==3)
{
    backup = i;
    cout<<endl<<"Same Category Products are :"<<endl;
    int g = 0;
    int y = g;
    string temp="";
    bool check = true;


    while(g<i)
    {

        string *saves = new string[y+1];
        for(int i = 0;i<y;i++)
        {
            saves[i] = main[i];
        }


        for(int i = 0;i<y;i++)
        {
            if(main[i]==Main_Array[g][1])
            {check = false; break;}
        }

        if(!check)
        {   g++; 
            check = true;
            continue;     }

        saves[g] = Main_Array[g][1];

        delete[] main;
        main = saves;

        saves = nullptr;

        cout<<endl<<"For category : "<<Main_Array[g][1]<<endl;
        int h = g;
        while(h<i)
        {
            if(Main_Array[g][1]==Main_Array[h][1])
            cout<<Main_Array[h][0]<<endl;
            
            h++;
        }
        g++;
        y++;
    }

i = backup;
continue;

}
else if(input==4)
{
    for (int r = 0; r < i; r++) {
        delete[] Main_Array[r];
    }
    delete[] Main_Array;
    Main_Array = nullptr;

    return 0;
}


        i++;
    }

    return 0;
}