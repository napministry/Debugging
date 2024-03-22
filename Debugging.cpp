#include <iostream>
using namepsace std;

int main() {
    // Using code, give 3 examples of syntax errors and 3 examples of logical errors. Present full code. 
    // 1. (syntax) Misplaced semicolon
    class teacher; 
    {
        private:
            string num;
        public: 
            void setNum(int num1) {num = num1;}
            string getNum() { return num }

    };

    return 0;

    // 2. (syntax) Using strings without quotes
    cout << please enter your weight << endl;  
    cin >> weight;

    //3. (syntax) Declaring wrong variable
    int case = 10;

    cout << case;

    return 0;

    // 4. (logic) semicolon after loop 
    int 1 = 0;

    for(i = 0; i < 3; i++); {
        cout << "loop logical error";
            continue;
    }
    return 0;

    // 5. (logic) division by 0
    int x = 2; 
    for (int y = 0; y <5; y++) {
        cout << x << " " << endl;
        x = 2 * x + 3;
        if(y % 2 == 0)
        x = 3 * x + 2;
    }

    // 6. (logic) Precedence 
    // Expected output 34, Actual ouput: 104
    int a = 10; 
    int b = 3; 
    int c = 8;

    return (a + b * c);


}