#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <unistd.h>
#include <time.h>
using namespace std;

void delay(float number_of_seconds)
{
    // Converting time into milli_seconds
   float milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}
class ques
{
       string question;
       string opta;
       string optb;
       string optc;
       string optd;

   public:

         getdata(string qu,string opt1,string opt2, string opt3,string opt4)
        {
           question = qu;
           opta = opt1;
           optb = opt2;
           optc = opt3;
           optd = opt4;
        }

      showdata()
        {
            cout<<question<<endl;
            cout<<"1: "<<opta<<endl;
            cout<<"2: "<<optb<<endl;
            cout<<"3: "<<optc<<endl;
            cout<<"4: "<<optd<<endl;
        }
        evaluatedata(int s,int h,int co,int oco)
        {

            cout<<"\nEVALUATION OF YOUR EMOTIONAL QUOTIENT\n";
            cout<<"Loading..";
            char i = 219;
            for(int j= 0;j<=11;j++)
            {

                cout<<i;

                delay(0.3);
            }
//
            cout<<i<<"\n\n\n";delay(0.3);

            switch(s)
            {
            case 0:
                {
                    cout<<"\n";
                    cout<<"\n Sad : 0%\n";
                    break;
                }
            case 25:
                {
                    cout<<"\nSad : 25%\n";
                    for(int j= 0;j<=2;j++)
                    {
                        cout<<i;
                        delay(0.3);
                    }
                    break;
                }
            case 50:
                {
                    cout<<"\nSad : 50%\n";
                    for(int j= 0;j<=5;j++)
                        {
                            cout<<i;
                            delay(0.3);
                        }

                    break;
                }
            case 75:
                {
                    cout<<"\nSad : 75%\n";

            for(int j= 0;j<=8;j++)
            {
                cout<<i;
                delay(0.3);
            }

                    break;
                }
            case 100:
                {
                    cout<<"\nSad : 100%\n";

            for(int j= 0;j<=11;j++)
            {
                cout<<i;
                delay(0.3);
            }
                    break;
                }
            }
            switch(h)
            {
            case 0:
                {
                    cout<<"\nHappy : 0%\n";
                    break;
                }
            case 25:
                {
                    cout<<"\nHappy : 25%\n";

           for(int j= 0;j<=2;j++)
                        {
                            cout<<i;
                            delay(0.3);
                        }
                    break;
                }
            case 50:
                {
                    cout<<"\nHappy : 50%\n";
                    for(int j= 0;j<=5;j++)
                        {
                            cout<<i;
                            delay(0.3);
                        }
                    break;
                }
            case 75:
                {
                    cout<<"\nHappy : 75%\n";
            for(int j= 0;j<=8;j++)
            {
                cout<<i;
                delay(0.3);
            }

                    break;
                }
            case 100:
                {
                    cout<<"\nHappy : 100%\n";

           for(int j= 0;j<=11;j++)
            {
                cout<<i;
                delay(0.3);
            }
                    break;
                }
            }
            switch(co)
            {
            case 0:
                {
                    cout<<"\nConfidence Level : 0%\n";
                    break;
                }
            case 25:
                {
                    cout<<"\nConfidence Level : 25%\n";

           for(int j= 0;j<=2;j++)
                    {
                        cout<<i;
                        delay(0.3);
                    }

                    break;
                }
            case 50:
                {
                    cout<<"\nConfidence Level : 50%\n";


                        for(int j= 0;j<=5;j++)
                        {
                            cout<<i;
                            delay(0.3);
                        }
                    break;
                }
            case 75:
                {
                    cout<<"\nConfidence Level : 75%\n";

                      for(int j= 0;j<=8;j++)
            {
                cout<<i;
                delay(0.3);
            }

                    break;
                }
            case 100:
                {
                    cout<<"\nConfidence Level : 100%\n";
                     cout<<i;delay(0.3);
                    for(int j= 0;j<=11;j++)
            {
                cout<<i;
                delay(0.3);
            }
                    break;
                }
            }
            switch(oco)
            {
            case 0:
                {
                    cout<<"\nOverConfidence Levels : 0%\n";
                    break;
                }
            case 25:
                {
                    cout<<"\nOverConfidence Levels : 25%\n";

            for(int j= 0;j<=2;j++)
                    {
                        cout<<i;
                        delay(0.3);
                    }

                    break;
                }
            case 50:
                {
                    cout<<"\nOverConfidence Levels : 50%\n";

               for(int j= 0;j<=5;j++)
                        {
                            cout<<i;
                            delay(0.3);
                        }
                    break;
                }
            case 75:
                {
                    cout<<"\nOverConfidence Levels : 75%\n";

                for(int j= 0;j<=8;j++)
            {
                cout<<i;
                delay(0.3);
            }
            break;
                }
            case 100:
                {
            cout<<"\nOverConfidence Levels : 100%\n";
            for(int j= 0;j<=11;j++)
            {
                cout<<i;
                delay(0.3);
            }
                    break;
                }
            }

        }
};

int main()
{
    ques obj[5];
   obj[0].getdata("\nQuestion 1. If you found a lost wallet ,what will you do with it?","I will return the wallet to the person","I don't care! I will use the money for personal expense","I cant use the money its against molarity !I will send this money to charity","I will use the money and return the documents");
   obj[1].getdata("\nQuestion 2. If you wanna learn Bike/car ,how will you manage?","I will learn the Bike/car from learning school.","I had heard about the bad accidents ,so i will never drive.","New things to learn is my passion,thus i will practice more","Bike/Car riding is a child's play .I can learn it very easily without any help.");
   obj[2].getdata("\nQuestion 3. Do you ever go to a place and remember the past experience ?","Yes","NO,I'm stone cold.","yes,but its not the primary for the memories or emotions","I don't have to go to remember the things.");
   obj[3].getdata("\nQuestion 4. Does seeing certain object remind you of the better(worst) times.","Yes,but thats common right? I don't get emotional over it!"," Nope! i am stone cold *cheers*","Yes *sobs*","hey have to be really ... on the nose.Like the exact shirt or whatever.Mainly in a picture. ");

    cout<<"----------------------------------------WELCOME TO  OUR SENTIMENTAL ANALYSIS TEST--------------------------------------------";
    cout<<"\n----------------------------------------                                        ---------------------------------------------";
    cout<<"\nThere are a set of 4 random questions that you need to answer by giving the no.of the option you want to choose.\n";


    int sad = 0;
    int happy = 0;
    int oc = 0;
    int c = 0;
    srand(time(0));
    for(int i = 3;i>=0;i--)
    {

        int a = rand()%10;
        int b = a % 4;
        obj[b].showdata();
        int o;
        cin>>o;
        switch(o)
        {
            case 1:
            {
                sad = sad + 25;
                break;
            }
            case 2:
            {
                happy = happy + 25;
                break;
            }
            case 3:
            {
                c = c + 25;
                break;
            }
            case 4:
            {
                oc = oc + 25;
                break;
            }
        }
//        srand(time(0));
    }
    obj[4].evaluatedata(sad,happy,c,oc);

}






