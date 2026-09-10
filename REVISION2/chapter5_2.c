#include<stdio.h>

 
    int sum(int a,int b) {
        int c;
        c = a+b;
        return c;
    }

    int multiply(int d, int e) {
        int f;
        f = d*e;
        return f;
    }

    float divide(float g, float h) { //* see this
        float i;
        i = g/h;
        return i;
    }

    int sub(int j,int k) {
        int l;
        l = j - k;
        return l;
    }

    int factorial(int q) {
        int s;
        if (q == 0 || q == 1)
        {
            return 1;
        }
        
        s = factorial(q-1)*q;
        return s;
    }

    float avg(float u,float v, float w) {
        float x;
        x = (u+v+w)/3;
        return x;
    }

    float force(float mass) {
        return mass*9.8;
    }

    int sum2(int value) {
        return value + sum2(value - 1); //! see here
    }

    
    int main() {
        float u,v,w,mass;
        int value;

     printf("Enter three values: ");
     scanf("%f %f %f", &u, &v, &w);
     printf("Enter mass: ");
     scanf("%f", &mass);
     printf("Enter value: ");
     scanf("%d", &value);


        int m = sum(45,90);
        int n = sub(45,90);
        int o = multiply(45,90);
        int t = factorial(5);
        int hg = sum2(value);
        float p = divide(45,90);
        float r = avg(u,v,w);
        float df = force(mass);
        

        printf("%d\n%d\n%d\n%f\n%d\n%f\n%f\n%d",m,n,o,p,t,r,df,hg);
    }