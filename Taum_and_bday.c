## Taum is planning to celebrate the birthday of his friend, Diksha. There are two types of gifts that Diksha wants from Taum: one is black and the other is white. To make her happy, Taum has to buy  black gifts and  white gifts.

The cost of each black gift is bc units.
The cost of every white gift is wc units.
The cost to convert a black gift into white gift or vice versa is  units.
Determine the minimum cost of Diksha's gifts.
  
  
  Sample Input

STDIN   Function
-----   --------
5       t = 5
10 10   b = 10, w = 10
1 1 1   bc = 1, wc = 1, z = 1
5 9     b = 5, w = 5
2 3 4   bc = 2, wc = 3, z = 4
3 6     b = 3, w = 6
9 1 1   bc = 9, wc = 1, z = 1
7 7     b = 7, w = 7
4 2 1   bc = 4, wc = 2, z = 1
3 3     b = 3, w = 3
1 9 2   bc = 1, wc = 9, z = 2
  
 Sample Output

20
37
12
35
12


#include<stdio.h>
int main()
{
    int test_case,t;
    long int b,w,bc,wc,z;
    long int final_amnt = 0;
    
    scanf("%d",&test_case);
    
    for(t=0;t<test_case;t++)
    {
        final_amnt = 0;
        scanf("%ld %ld",&b,&w);
        scanf("%ld %ld %ld",&bc,&wc,&z);
        
        
        
        if(b == w && w == z)
        {
         final_amnt = bc * b + wc * w;
        }   
        else if(bc > wc + z)
        {
            final_amnt = (b * z) + ((w + b) * wc);
        }
        else if(wc > bc + z){
        
            final_amnt = (w * z) + ((w + b) * bc);
        }
        else {
            final_amnt = bc * b + wc * w;
        }
        printf("%ld\n",final_amnt);
        }
    }
