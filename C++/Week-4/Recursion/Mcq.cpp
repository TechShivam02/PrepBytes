Which Data Structure is used to perform Recursion?
Ans : Stack





What happens if base condition is not defined in recursion ?
Ans : Stack Overflow





What will be the output of following code?

    int fun(int n)
    {
        if (n == 4)
        return n;
        else return 2*fun(n+1);
    }
    
    
    int main()
    {
    cout<< fun(2);
    return 0;
    }



// Ans : 16











Consider the following recursive function fun(x, y). What is the value of fun(4, 3)

int fun(int x, int y)
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);
}

Ans : 13






In recursion, the condition for which the function will stop calling itself is ____________

Ans : Base case










What will be the output of following:

void my_recursive_function()
{
   my_recursive_function();
}
int main()
{
   my_recursive_function();
   return 0;
}

Ans : The code will run for some time and stop when the stack overflows








What does the following function print for n = 25?

void fun(int n)
{
  if (n == 0)
    return;
 
  cout<< n%2;
  fun(n/2);
}

Ans : 10011









What will be the output of following?

    int fun(int a[],int n)
    {
    int x;
    if(n == 1)
        return a[0];
    else
        x = fun(a, n-1);
    if(x > a[n-1])
        return x;
    else
        return a[n-1];
    }
    
    int main()
    {
    int arr[] = {12, 10, 30, 50, 100};
    cout<< fun(arr,5);
    return 0;
    }

Ans : 100









what will be the output of following?

int sumDigits(int no)
{
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}
 
int main(void)
{
    cout<< sumDigits(718);
    return 0;
}

Ans : 16










What will be the output of following?

    void fun(int n)
    {
        if(n > 0)
        {
            fun(n-1);
            cout<< n;
            fun(n-1);
        }
    }
    
    int main()
    {
        fun(4);
        return 0;
    }


Ans : 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1 