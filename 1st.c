# include<stdio.h>
# include<string.h>
   
     struct student {
        char *name;
    };
    
    struct student fun(void)
    {
        struct student s;
        s.name = "alan";
        return s;
    }
    
    void main () {
        struct student m = fun();
        s.name = "turing";
        printf("%s", m.name);
    }
