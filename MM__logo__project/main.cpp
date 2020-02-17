#include <iostream>

using namespace std;

void bottom(int N){

    char dash = '-';
    char star = '*';
    int outerLoop = (N + 1) / 2;
    int limitDash = N/2;
    const int width = 7;

    for(int a=0; a<outerLoop; a++){
        int counter = 0;
        while(counter <= 1){                                //A while loop that lets drawing of part of the second M    (to duplicate the second M)
            for(int i=0; i<width; i++){
                if(i%2 == 0){
                    if((i==0) || (i==6)){
                        for(int k=a; k<limitDash; k++)  // A pattern for the first & last bottom corners
                            cout<<dash;
                    }
                    else{
                        for(int k=(2*a)+1; k>0; k--)    // A pattern for the bottom two middle pyramids.
                            cout<<dash;
                        }
                }
                else{
                    if(i==3){
                        int b = (N*2) - 1 - (a * 2);    // A pattern for the center at the bottom
                        for(int j=b;j>0; j--)
                            cout<<star;
                    }
                    else{
                        for(int m=0; m<N; m++)          //left and right bottom corner patterns.
                            cout<<star;
                    }
                }
            }
            counter++;
        }
        cout<<endl;
      }
}

void top(int N){
    char dash = '-';
    char star = '*';
    int outerLoop = (N+1)/2;
    const int width = 5;

    for(int a=0; a<outerLoop; a++){
         int counter = 0;
         while(counter <= 1){                               //A while loop that lets drawing of part of the second M   (to duplicate the second M)
            for(int i=0; i<width; i++){
                if(i%2 == 0){
                    if((i==0) || (i==4)){
                        for(int j=N-a; j>0; j--)                // Pattern for top left and right corners with dashes
                            cout<<dash;
                    }
                    else{
                        int b = N - (a * 2);
                        for(int k=b; k>0; k--)                 //Pattern for center part at the top with dashes
                            cout<<dash;
                    }
                }
                else{
                    int c = N + (a * 2);                        //All stars at the top
                    for(int m=c; m>0; m--)
                        cout<<star;
                }
            }
            counter++;
        }
        cout<<endl;
    }
}

void drawMMlogo(){
    cout<<"Enter an input for N :  >>> "<<endl;
    int N;
    cin>>N;

    if(N % 2 != 0){
        if(N > 2 && N < 1000){
            top(N);
            bottom(N);
        }else
          cout<<"Enter a value greater than 2 and less than 1000"<<endl;
    }
    else
         cout<<"Input value has to be an odd number"<<endl;
}

int main()
{

    drawMMlogo();


    return 0;
}

