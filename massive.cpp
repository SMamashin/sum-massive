#include<iostream.h>
 
double mak (double *massive, int n);
 
int main()
{
        
        int i, n, imax, imin, p_min_max, s_minus,p,S;
 
        cout<<"Vvedite kolichestvo elementov massiva: " << endl;
        cin>>n;
        double *massive =new double [n];
        cout<<"Vvedite "<<n<<" elementov"<<endl;
        for(i=0; i<n; i++)
                cin>>massive[i];
 
        cout<<endl;
        cout<<"Ishodniy massiv: "<<endl;
        for(i=0; i<n;i++)
                cout<<massive[i]<<" ";
        cout<<"Sum is: "<< mak(massive, n) <<'\n';
        cout<<endl;
        cout<<endl;
        delete[] massive;
        return 0;
}
double mak (double *massive, int n)
{
        int S=0;
        for(int i=0;i<n;i++)
        {
                if (massive[i]<0) S+=massive[i];
        }
        return S;
}