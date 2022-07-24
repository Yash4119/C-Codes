#include <iostream>
#include<cstring>

using namespace std;

class CWH {
protected:
string title;
float rating;

public:
    CWH(string s , float r){
    title = s;
    rating = r;
    }
    virtual void display() = 0; //do-nothing Function
                                //also called as pPure Virtual Function
};

class CWH_Video : public CWH{

float video_length;

public:
    CWH_Video(string s , float r , float vl) : CWH(s,r){
    video_length = vl;
    }
    void display(){
    cout<<"Title of video is "<<title<<endl;
    cout<<"RAting for the video is "<<rating<<endl;
    cout<<"Video length is "<<video_length<<endl;
    cout<<endl;
        }
};

class CWH_text : public CWH{
int words;

public:
    CWH_text(string s, float r, int w) : CWH(s,r){
    words = w;
    }
    void display(){
    cout<<"Title of video is "<<title<<endl;
    cout<<"RAting for the video is "<<rating<<endl;
    cout<<"Word Count of the video is "<<words<<endl;
    cout<<endl;
    }

};

int main()
{
    string title;
    float rating , vlen;
    int words;

    //for CWH_Video
    title = "C++ Tutorial with Code With Harry";
    rating = 4.9;
    vlen = 12.04;
    CWH_Video djvideo(title , rating , vlen);

title = "C++ Text Tutorial on Code With Harry Website";
    rating = 4.9;
    words = 1245;
    CWH_text djtext(title , rating , words);

    CWH *tut[2];
    tut[0] = &djvideo;
    tut[1] = &djtext;

    tut[0]->display();
    tut[1]->display();



    return 0;
}
