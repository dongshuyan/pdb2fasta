#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    freopen ("out.fa","w",stdout);
    fstream in;
    string strFileName = "in.pdb";
	in.open(strFileName.c_str());
	string sa,sb,sc;
        sa="";
        sb="";
        sc="";
    while( !in.eof()) //如果没有读到文件结尾
    {
        string strBuff;
        getline(in,strBuff);  //strBuff即 一行的数据

        istringstream is(strBuff);
        string s;
        int num =0;
        is>>s;
        if (s!="ATOM") continue;


        while(is>>s)
        {
            num++;
            if (num==3) sa=s;

            //if (num ==4 ) cout<<"\nn="<<s<<endl;
            if (num == 5 && sb==s) break;
            else if (num == 5 )
            {
                sb=s;
                s=sa;

                if (s=="ALA") cout<<"A";
                else if (s=="CYS") cout<<"C";
                else if (s=="ASP") cout<<"D";
                else if (s=="GLU") cout<<"E";
                else if (s=="PHE") cout<<"F";
                else if (s=="GLY") cout<<"G";
                else if (s=="HIS") cout<<"H";
                else if (s=="ILE") cout<<"I";
                else if (s=="LYS") cout<<"K";
                else if (s=="LEU") cout<<"L";
                else if (s=="MET") cout<<"M";
                else if (s=="ASN") cout<<"N";
                else if (s=="PRO") cout<<"P";
                else if (s=="GLN") cout<<"Q";
                else if (s=="ARG") cout<<"R";
                else if (s=="SER") cout<<"S";
                else if (s=="THR") cout<<"T";
                else if (s=="VAL") cout<<"V";
                else if (s=="TRP") cout<<"W";
                else if (s=="TYR") cout<<"Y";
                //else cout <<"  "<<s<<"   ";
            }

        }
        //cout<<endl;
        //cout<<endl;
    }
    in.close();

    return 0;
}
