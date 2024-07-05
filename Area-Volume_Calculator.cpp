#include <iostream>
#include <cmath>

using namespace std;
   
    
    int main(){

    int choice;
    cout<<"1-Area"<<endl;
    cout<<"2-Volume"<<endl;
    cout<<"Enter your choice :: ";
    cin>>choice;
    int num;
    float area,volume,radius,length,width,height;
    if (choice==1){
         cout<<"1- Area of Circle "<<endl;
         cout<<"2- Area of Rectangle "<<endl;
         cout<<"3- Area of Square "<<endl;
         cout<<"Enter the number corresponding to the shape :: ";
         cin>>num;
         switch(num){
      case 1:
        cout<<"Enter the radius of the Circle :: ";
        cin>>radius;
        area = 3.14 * pow(radius, 2);
      break;
      case 2:
        cout<<"Enter the length of the Rectangle :: ";
        cin>>length;
        cout<<"Enter the Width of the Rectangle :: ";
        cin>>width;
        area = length * width;
      break;
      case 3:
        cout<<"Enter the length of the side of the Square :: ";
        cin>>length;
        area =  pow(length,2);
      break;
       
    }
    cout<<"\nArea :: "<<area<<endl;
    return 0;
    }

   if (choice==2){
         cout<<"1- Volume of Sphere "<<endl;
         cout<<"2- Volume of Cuboid "<<endl;
         cout<<"3- Volume of Cube "<<endl;
         cout<<"Enter the number corresponding to the shape :: ";
         cin>>num;
         switch(num){
      case 1:
        cout<<"Enter the radius of the Sphere :: ";
        cin>>radius;
        volume = 4.18 * pow(radius, 3);
      break;
      case 2:
        cout<<"Enter the length of the Cuboid :: ";
        cin>>length;
        cout<<"Enter the Width of the Cuboid :: ";
        cin>>width;
        cout<<"Enter the height of the Cuboid :: ";
        cin>>height;
        volume = length * width * height;
      break;
      case 3:
        cout<<"Enter the length of the side of the Cube :: ";
        cin>>length;
        volume =  pow(length,3);
      break;
      defualt:
        cout<<"Invalid choice...!"; 
    }
    cout<<"\nVolume :: "<<volume<<endl;
    return 0;
    }
    
    