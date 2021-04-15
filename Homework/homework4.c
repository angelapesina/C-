// I DID THIS HOMEWORK WITH HELP OF Emilio Gonzalez AND Francisco Sanchez.

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstring>
#include<stack>

using namespace std;


stack<char> op;
stack<int> res;

char line[1001];

// CONVERSIÓN 
int convert(int a, int b) {

    int n = 0;

    for(int i=a; i<b; i++) {
        n *= 10;
        n += line[i] - '0';
    }

    return n;

}


bool isop(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='%';
}

// OPERACIONES 
int prec(char s) {
	
    if(s=='^')
        return 3;
    if(s=='*' || s=='/' || s=='%')
        return 2;
    if(s=='+' || s=='-')
        return 1;
    return 0;
}

int sq(int x) {
    return x*x;
}

int pot(int b, int e) {
    if(e==0)
        return 1;
    if(e==1)
        return b;
    if(e%2==0)
        return sq(pot(b, e/2));
    return b * pot(b, e-1);
}

void solve(char o) {

    // OPERACIONES 
    int b, a;

    b = res.top();
    res.pop();

    a = res.top();
    res.pop();

    if(o == '+')
        res.push(a + b);
    else if(o == '-')
        res.push(a - b);
    else if(o == '*')
        res.push(a * b);
    else if(o == '/') {
       
	    if(b == 0) {
            printf("Error.\n");
            exit(0);
        }
        res.push(a / b);
    } else if(o == '^')
        res.push(pot(a, b));
    else if(o == '%') {
        if(b == 0) {
            printf("Error.\n");
            exit(0);
        }
        res.push(a % b);
    }

    //TAKE OFF THE OPERATOR 
    op.pop();

}

void decode() {

    int len = strlen(line);

   
    line[len++] = ')';
    line[len] = '\0';

    op.push('(');

  
    for(int i=0; i<len; i++)
        if(line[i] == ' ')
            continue;
        else if(line[i]=='(')
            op.push('(');
        else if(line[i]==')') {

            while(1) {
                if(op.top()=='(') {
                    op.pop();
                    break;
                }
                solve(op.top());
            }

        } else if(isdigit(line[i])) {

            

            int j=i+1;

            for(; j<len; j++)
                if(!isdigit(line[j]))
                    break;

            res.push(convert(i, j));

            i = j-1;

        } else if(isop(line[i])) {

         

            while(prec(op.top()) >= prec(line[i]))
                solve(op.top());

            op.push(line[i]);

        }

    // IMPRIMIR EL RESULTADO 
    printf("%d\n", res.top());

    res.pop();

}

int main() {
	printf("Ingresa tu operacion a realizar: \n");
  
    gets(line);

    
    decode();

    return 0;

}
