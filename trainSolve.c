//
//  main.c
//  TrainSolver
//
//  This is probably the worst thing I have ever written
//
//  Created by Nelson Odins-Jones on 25/0/2016.
//  Copyright © 2NOT_TARGET16 Nelson Odins-Jones. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1 
#define FALSE 0

#define TARGET 10
#define NOT_TARGET 0

void solveGame (float first, float second, float third, float fourth);

int main(int argc, const char * argv[]) {

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    printf("Enter four numbers (format a, b, c, d): ");
    scanf("%d, %d, %d, %d", &one, &two, &three, &four);
    solveGame(one, two, three, four);
    
    return EXIT_SUCCESS;
}

void solveGame (float first, float second, float third, float fourth) {
    
    char firstOperand = 0;
    char secondOperand = 0;
    char thirdOperand = 0;
    int canBeDone = TRUE;
    int i = 0;
    
    float add = first + second;
    
        float add_Add = add + third;
            float add_Add_Add = add_Add + fourth;
            float add_Add_Sub = add_Add - fourth;
            float add_Add_Mul = add_Add * fourth;
            float add_Add_Div = add_Add / fourth;
        float add_Sub = add - third;
            float add_Sub_Add = add_Sub + fourth;
            float add_Sub_Sub = add_Sub - fourth;
            float add_Sub_Mul = add_Sub * fourth;
            float add_Sub_Div = add_Sub / fourth;
        float add_Mul = add * third;
            float add_Mul_Add = add_Mul + fourth;
            float add_Mul_Sub = add_Mul - fourth;
            float add_Mul_Mul = add_Mul * fourth;
            float add_Mul_Div = add_Mul / fourth;
        float add_Div = add / third;
            float add_Div_Add = add_Div + fourth;
            float add_Div_Sub = add_Div - fourth;
            float add_Div_Mul = add_Div * fourth;
            float add_Div_Div = add_Div / fourth;
    
    float sub = first - second;
    
        float sub_Add = sub + third;
            float sub_Add_Add = sub_Add + fourth;
            float sub_Add_Sub = sub_Add - fourth;
            float sub_Add_Mul = sub_Add * fourth;
            float sub_Add_Div = sub_Add / fourth;
        float sub_Sub = sub - third;
            float sub_Sub_Add = sub_Sub + fourth;
            float sub_Sub_Sub = sub_Sub - fourth;
            float sub_Sub_Mul = sub_Sub * fourth;
            float sub_Sub_Div = sub_Sub / fourth;
        float sub_Mul = sub * third;
            float sub_Mul_Add = sub_Mul + fourth;
            float sub_Mul_Sub = sub_Mul - fourth;
            float sub_Mul_Mul = sub_Mul * fourth;
            float sub_Mul_Div = sub_Mul / fourth;
        float sub_Div = sub / third;
            float sub_Div_Add = sub_Div + fourth;
            float sub_Div_Sub = sub_Div - fourth;
            float sub_Div_Mul = sub_Div * fourth;
            float sub_Div_Div = sub_Div / fourth;
    
    float mul = first * second;
    
        float mul_Add = mul + third;
            float mul_Add_Add = mul_Add + fourth;
            float mul_Add_Sub = mul_Add - fourth;
            float mul_Add_Mul = mul_Add * fourth;
            float mul_Add_Div = mul_Add / fourth;
        float mul_Sub = mul - third;
            float mul_Sub_Add = mul_Sub + fourth;
            float mul_Sub_Sub = mul_Sub - fourth;
            float mul_Sub_Mul = mul_Sub * fourth;
            float mul_Sub_Div = mul_Sub / fourth;
        float mul_Mul = mul * third;
            float mul_Mul_Add = mul_Mul + fourth;
            float mul_Mul_Sub = mul_Mul - fourth;
            float mul_Mul_Mul = mul_Mul * fourth;
            float mul_Mul_Div = mul_Mul / fourth;
        float mul_Div = mul / third;
            float mul_Div_Add = mul_Div + fourth;
            float mul_Div_Sub = mul_Div - fourth;
            float mul_Div_Mul = mul_Div * fourth;
            float mul_Div_Div = mul_Div / fourth;
    
    float div = first / second;
    
        float div_Add = div + third;
            float div_Add_Add = div_Add + fourth;
            float div_Add_Sub = div_Add - fourth;
            float div_Add_Mul = div_Add * fourth;
            float div_Add_Div = div_Add / fourth;
        float div_Sub = div - third;
            float div_Sub_Add = div_Sub + fourth;
            float div_Sub_Sub = div_Sub - fourth;
            float div_Sub_Mul = div_Sub * fourth;
            float div_Sub_Div = div_Sub / fourth;
        float div_Mul = div * third;
            float div_Mul_Add = div_Mul + fourth;
            float div_Mul_Sub = div_Mul - fourth;
            float div_Mul_Mul = div_Mul * fourth;
            float div_Mul_Div = div_Mul / fourth;
        float div_Div = div / third;
            float div_Div_Add = div_Div + fourth;
            float div_Div_Sub = div_Div - fourth;
            float div_Div_Mul = div_Div * fourth;
            float div_Div_Div = div_Div / fourth;
    
    
    while (canBeDone){
        // first is add
        
        if (add_Add_Add == TARGET) {
            firstOperand = '+';
            secondOperand = '+';
            thirdOperand = '+';
            add_Add_Add = NOT_TARGET;
        } else if (add_Add_Sub == TARGET) {
            firstOperand = '+';
            secondOperand = '+';
            thirdOperand = '-';
            add_Add_Sub = NOT_TARGET;
        } else if (add_Add_Mul == TARGET) {
            firstOperand = '+';
            secondOperand = '+';
            thirdOperand = '*';
            add_Add_Mul = NOT_TARGET;
        } else if (add_Add_Div == TARGET) {
            firstOperand = '+';
            secondOperand = '+';
            thirdOperand = '/';
            add_Add_Div = NOT_TARGET;
        }
        
        else if (add_Sub_Add == TARGET) {
            firstOperand = '+';
            secondOperand = '-';
            thirdOperand = '+';
            add_Sub_Add = NOT_TARGET;
        } else if (add_Sub_Sub == TARGET) {
            firstOperand = '+';
            secondOperand = '-';
            thirdOperand = '-';
            add_Sub_Sub = NOT_TARGET;
        } else if (add_Sub_Mul == TARGET) {
            firstOperand = '+';
            secondOperand = '-';
            thirdOperand = '*';
            add_Sub_Mul = NOT_TARGET;
        } else if (add_Sub_Div == TARGET) {
            firstOperand = '+';
            secondOperand = '-';
            thirdOperand = '/';
            add_Sub_Div = NOT_TARGET;
        }
        
        else if (add_Mul_Add == TARGET) {
            firstOperand = '+';
            secondOperand = '*';
            thirdOperand = '+';
            add_Mul_Add = NOT_TARGET;
        } else if (add_Mul_Sub == TARGET) {
            firstOperand = '+';
            secondOperand = '*';
            thirdOperand = '-';
            add_Mul_Sub = NOT_TARGET;
        } else if (add_Mul_Mul == TARGET) {
            firstOperand = '+';
            secondOperand = '*';
            thirdOperand = '*';
            add_Mul_Mul = NOT_TARGET;
        } else if (add_Mul_Div == TARGET) {
            firstOperand = '+';
            secondOperand = '*';
            thirdOperand = '/';
            add_Mul_Div = NOT_TARGET;
        }
        
        else if (add_Div_Add == TARGET) {
            firstOperand = '+';
            secondOperand = '/';
            thirdOperand = '+';
            add_Div_Add = NOT_TARGET;
        } else if (add_Div_Sub == TARGET) {
            firstOperand = '+';
            secondOperand = '/';
            thirdOperand = '-';
            add_Div_Sub = NOT_TARGET;
        } else if (add_Div_Mul == TARGET) {
            firstOperand = '+';
            secondOperand = '/';
            thirdOperand = '*';
            add_Div_Mul = NOT_TARGET;
        } else if (add_Div_Div == TARGET) {
            firstOperand = '+';
            secondOperand = '/';
            thirdOperand = '/';
            add_Div_Div = NOT_TARGET;
        }
        
        
        // first is sub
        
        else if (sub_Add_Add == TARGET) {
            firstOperand = '-';
            secondOperand = '+';
            thirdOperand = '+';
            sub_Add_Add = NOT_TARGET;
        } else if (sub_Add_Sub == TARGET) {
            firstOperand = '-';
            secondOperand = '+';
            thirdOperand = '-';
            sub_Add_Sub = NOT_TARGET;
        } else if (sub_Add_Mul == TARGET) {
            firstOperand = '-';
            secondOperand = '+';
            thirdOperand = '*';
            sub_Add_Mul = NOT_TARGET;
        } else if (sub_Add_Div == TARGET) {
            firstOperand = '-';
            secondOperand = '+';
            thirdOperand = '/';
            sub_Add_Div = NOT_TARGET;
        }
        
        else if (sub_Sub_Add == TARGET) {
            firstOperand = '-';
            secondOperand = '-';
            thirdOperand = '+';
            sub_Sub_Add = NOT_TARGET;
        } else if (sub_Sub_Sub == TARGET) {
            firstOperand = '-';
            secondOperand = '-';
            thirdOperand = '-';
            sub_Sub_Sub = NOT_TARGET;
        } else if (sub_Sub_Mul == TARGET) {
            firstOperand = '-';
            secondOperand = '-';
            thirdOperand = '*';
            sub_Sub_Mul = NOT_TARGET;
        } else if (sub_Sub_Div == TARGET) {
            firstOperand = '-';
            secondOperand = '-';
            thirdOperand = '/';
            sub_Sub_Div = NOT_TARGET;
        }
        
        else if (sub_Mul_Add == TARGET) {
            firstOperand = '-';
            secondOperand = '*';
            thirdOperand = '+';
            sub_Mul_Add = NOT_TARGET;
        } else if (sub_Mul_Sub == TARGET) {
            firstOperand = '-';
            secondOperand = '*';
            thirdOperand = '-';
            sub_Mul_Sub = NOT_TARGET;
        } else if (sub_Mul_Mul == TARGET) {
            firstOperand = '-';
            secondOperand = '*';
            thirdOperand = '*';
            sub_Mul_Mul = NOT_TARGET;
        } else if (sub_Mul_Div == TARGET) {
            firstOperand = '-';
            secondOperand = '*';
            thirdOperand = '/';
            sub_Mul_Div = NOT_TARGET;
        }
        
        else if (sub_Div_Add == TARGET) {
            firstOperand = '-';
            secondOperand = '/';
            thirdOperand = '+';
            sub_Div_Add = NOT_TARGET;
        } else if (sub_Div_Sub == TARGET) {
            firstOperand = '-';
            secondOperand = '/';
            thirdOperand = '-';
            sub_Div_Sub = NOT_TARGET;
        } else if (sub_Div_Mul == TARGET) {
            firstOperand = '-';
            secondOperand = '/';
            thirdOperand = '*';
            sub_Div_Mul = NOT_TARGET;
        } else if (sub_Div_Div == TARGET) {
            firstOperand = '-';
            secondOperand = '/';
            thirdOperand = '/';
            sub_Div_Div = NOT_TARGET;
        }
        // first is mul
        
        else if (mul_Add_Add == TARGET) {
            firstOperand = '*';
            secondOperand = '+';
            thirdOperand = '+';
            mul_Add_Add = NOT_TARGET;
        } else if (mul_Add_Sub == TARGET) {
            firstOperand = '*';
            secondOperand = '+';
            thirdOperand = '-';
            mul_Add_Sub = NOT_TARGET;
        } else if (mul_Add_Mul == TARGET) {
            firstOperand = '*';
            secondOperand = '+';
            thirdOperand = '*';
            mul_Add_Mul = NOT_TARGET;
        } else if (mul_Add_Div == TARGET) {
            firstOperand = '*';
            secondOperand = '+';
            thirdOperand = '/';
            mul_Add_Div = NOT_TARGET;
        }
        
        else if (mul_Sub_Add == TARGET) {
            firstOperand = '*';
            secondOperand = '-';
            thirdOperand = '+';
            mul_Sub_Add = NOT_TARGET;
        } else if (mul_Sub_Sub == TARGET) {
            firstOperand = '*';
            secondOperand = '-';
            thirdOperand = '-';
            mul_Sub_Sub = NOT_TARGET;
        } else if (mul_Sub_Mul == TARGET) {
            firstOperand = '*';
            secondOperand = '-';
            thirdOperand = '*';
            mul_Sub_Mul = NOT_TARGET;
        } else if (mul_Sub_Div == TARGET) {
            firstOperand = '*';
            secondOperand = '-';
            thirdOperand = '/';
            mul_Sub_Div = NOT_TARGET;
        }
        
        else if (mul_Mul_Add == TARGET) {
            firstOperand = '*';
            secondOperand = '*';
            thirdOperand = '+';
            mul_Mul_Add = NOT_TARGET;
        } else if (mul_Mul_Sub == TARGET) {
            firstOperand = '*';
            secondOperand = '*';
            thirdOperand = '-';
            mul_Mul_Sub = NOT_TARGET;
        } else if (mul_Mul_Mul == TARGET) {
            firstOperand = '*';
            secondOperand = '*';
            thirdOperand = '*';
            mul_Mul_Mul = NOT_TARGET;
        } else if (mul_Mul_Div == TARGET) {
            firstOperand = '*';
            secondOperand = '*';
            thirdOperand = '/';
            mul_Mul_Div = NOT_TARGET;
        }
        
        else if (mul_Div_Add == TARGET) {
            firstOperand = '*';
            secondOperand = '/';
            thirdOperand = '+';
            mul_Div_Add = NOT_TARGET;
        } else if (mul_Div_Sub == TARGET) {
            firstOperand = '*';
            secondOperand = '/';
            thirdOperand = '-';
            mul_Div_Sub = NOT_TARGET;
        } else if (mul_Div_Mul == TARGET) {
            firstOperand = '*';
            secondOperand = '/';
            thirdOperand = '*';
            mul_Div_Mul = NOT_TARGET;
        } else if (mul_Div_Div == TARGET) {
            firstOperand = '*';
            secondOperand = '/';
            thirdOperand = '/';
            mul_Div_Div = NOT_TARGET;
        }
        
        // first is div
        
        else if (div_Add_Add == TARGET) {
            firstOperand = '/';
            secondOperand = '+';
            thirdOperand = '+';
            div_Add_Add = NOT_TARGET;
        } else if (div_Add_Sub == TARGET) {
            firstOperand = '/';
            secondOperand = '+';
            thirdOperand = '-';
            div_Add_Sub = NOT_TARGET;
        } else if (div_Add_Mul == TARGET) {
            firstOperand = '/';
            secondOperand = '+';
            thirdOperand = '*';
            div_Add_Mul = NOT_TARGET;
        } else if (div_Add_Div == TARGET) {
            firstOperand = '/';
            secondOperand = '+';
            thirdOperand = '/';
            div_Add_Div = NOT_TARGET;
        }
        
        else if (div_Sub_Add == TARGET) {
            firstOperand = '/';
            secondOperand = '-';
            thirdOperand = '+';
            div_Sub_Add = NOT_TARGET;
        } else if (div_Sub_Sub == TARGET) {
            firstOperand = '/';
            secondOperand = '-';
            thirdOperand = '-';
            div_Sub_Sub = NOT_TARGET;
        } else if (div_Sub_Mul == TARGET) {
            firstOperand = '/';
            secondOperand = '-';
            thirdOperand = '*';
            div_Sub_Mul = NOT_TARGET;
        } else if (div_Sub_Div == TARGET) {
            firstOperand = '/';
            secondOperand = '-';
            thirdOperand = '/';
            div_Sub_Div = NOT_TARGET;
        }
        
        else if (div_Mul_Add == TARGET) {
            firstOperand = '/';
            secondOperand = '*';
            thirdOperand = '+';
            div_Mul_Add = NOT_TARGET;
        } else if (div_Mul_Sub == TARGET) {
            firstOperand = '/';
            secondOperand = '*';
            thirdOperand = '-';
            div_Mul_Sub = NOT_TARGET;
        } else if (div_Mul_Mul == TARGET) {
            firstOperand = '/';
            secondOperand = '*';
            thirdOperand = '*';
            div_Mul_Mul = NOT_TARGET;
        } else if (div_Mul_Div == TARGET) {
            firstOperand = '/';
            secondOperand = '*';
            thirdOperand = '/';
            div_Mul_Div = NOT_TARGET;
        }
        
        else if (div_Div_Add == TARGET) {
            firstOperand = '/';
            secondOperand = '/';
            thirdOperand = '+';
            div_Div_Add = NOT_TARGET;
        } else if (div_Div_Sub == TARGET) {
            firstOperand = '/';
            secondOperand = '/';
            thirdOperand = '-';
            div_Div_Sub = NOT_TARGET;
        } else if (div_Div_Mul == TARGET) {
            firstOperand = '/';
            secondOperand = '/';
            thirdOperand = '*';
            div_Div_Mul = NOT_TARGET;
        } else if (div_Div_Div == TARGET) {
            firstOperand = '/';
            secondOperand = '/';
            thirdOperand = '/';
            div_Div_Div = NOT_TARGET;
        } else {
            canBeDone = FALSE;
            firstOperand = 0;
            secondOperand = 0;
            thirdOperand = 0;
        }
        
        if(!canBeDone && !i) {
            printf("IT CAN'T BE DONE! ");
        }
        
        if (firstOperand && secondOperand && thirdOperand) {
            printf("%d %c %d %c %d %c %d = %d\n",
                   (int)first, firstOperand,
                   (int)second, secondOperand,
                   (int)third, thirdOperand,
                   (int)fourth, TARGET);
        }
        i++;
    }
    if(i) {
        if (i == 2){
            printf("1 solution found!\n");
        } else {
            printf("%d solutions found!\n", i - 1);
        }
    }
    
}