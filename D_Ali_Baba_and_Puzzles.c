#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    char ops[] = {'+', '-', '*'};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;

            char op1 = ops[i], op2 = ops[j];
            long long result;

            // Apply precedence manually
            if (op1 == '*' && op2 == '*') {
                // Not possible since i != j and only one '*'
            } else if (op1 == '*') {
                // (a * b) OP2 c
                long long tmp = a * b;
                if      (op2 == '+') result = tmp + c;
                else if (op2 == '-') result = tmp - c;
            } else if (op2 == '*') {
                // a OP1 (b * c)
                long long tmp = b * c;
                if      (op1 == '+') result = a + tmp;
                else if (op1 == '-') result = a - tmp;
            } else {
                // No *, just left-to-right: (a OP1 b) OP2 c
                long long tmp;
                if      (op1 == '+') tmp = a + b;
                else                 tmp = a - b;
                if      (op2 == '+') result = tmp + c;
                else                 result = tmp - c;
            }

            if (result == d) {
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
    return 0;
}