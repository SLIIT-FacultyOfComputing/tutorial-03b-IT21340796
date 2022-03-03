#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);

    totalSurface = 2*(box1Length*box1Width)+2*(box1Length * box1Height)+
                    2*(box1Width*box1Height)+ 2*(box2Length* box2Width) +
      2*(box2Length * box2Height)+ 2*(box2Width*box2Height);
             
    cout << "Volume of Box is " << totalVolume << endl;
    cout<< "Total surface of box is "<<totalSurface << endl;
    
    return 0;
}

// Implement the Volume() function here
int volume(int height, int length, int width)
{
     int vol;
     return vol = height * width * length;
}
 