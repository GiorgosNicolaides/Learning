// #include <stdio.h>
// // // int main()
// // // {
// // //     int i;
// // //     float a[5] = {1.2f, 2.3f, 4.2f, 5.7f, 8.1f};
// // //     printf("%.1f %.1f\n", *(a + 3), *a);
// // //     return 0;
// // // }

// // // int main() {
// // // int a, b;
// // // a = 2;
// // // b = 3;
// // // printf("%d\n", (a ++) + (++ b) - 3);
// // // return 0;
// // // }

// // // void swap(int a, int b)
// // // {
// // //   int tmp;
// // //   tmp=a;
// // //   a=b;
// // //   b=tmp;

// // //   printf("%d %d\n", a, b);

// // // }
// // // int main()
// // // {
// // //     int a = 10, b = 20;
// // //     swap(a, b);

// // // //     printf("%d %d\n", a,b);
// // // //     return 0;
// // // // }
// // // // int main() {
// // // // char c;
// // // // for (c = 'a'; c < 'f'; c += 2) {
// // // // printf("%c", c);
// // // // }
// // // // printf("\n");
// // // // return 0;
// // // // }
// // // int main()
// // // {
// // //     int a = 3;
// // //     float b;
// // //     b = a / 2;
// // //     printf("%d\n", a);
// // //     printf("%d\n", a / 2);
// // //     printf("%.2f\n", b);
// // //     printf("%.2f\n", a / 2.0);
// // // }
// // // int main()
// // // {
// // // char arr[] = {1, 2, 3};
// // // char *p = (arr + 1);
// // // if(*(p + 1) == arr[1]) {
// // // printf("Yes");
// // // }
// // // else {
// // // printf("No");
// // // }
// // // return 0;
// // // }
// // // int main(){
// // //     int n;
// // // printf("Give me a number bigger than 3:\n");
// // // scanf("%d", &n);

// // // while(n<3){
// // //     printf("Wrong input\nGive me a number bigger than 3:\n");
// // //     scanf("%d" , &n);
// // // }
// // // for(int i=0;i<n;i++){
// // //     for(int j=0;j<n;j++){
// // //         if(i == 0 || i == n-1)printf("%c", 'A' + j);
// // //         else
// // //         if(j == (n-1) - i)printf("%c", 'A' + j);
// // //         else putchar(' ');
// // //     }printf("\n");
// // // }

// // // }
// // // int main(){
// // //     int n;
// // // printf("Give me a number bigger than 3:\n");
// // // scanf("%d", &n);

// // // while(n<3){
// // //     printf("Wrong input\nGive me a number bigger than 3:\n");
// // //     scanf("%d" , &n);
// // // }
// // // for(int i=0;i<n;i++){
// // //     for(int j=0;j<n;j++){
// // //       if(j>=i)putchar('*');
// // //       else
// // //       putchar(' ');

// // //     }printf("\n");
// // // }

// // // }
// // // int main(){
// // //     int n;
// // // printf("Give me a number bigger than 3:\n");
// // // scanf("%d", &n);

// // // while(n<3){
// // //     printf("Wrong input\nGive me a number bigger than 3:\n");
// // //     scanf("%d" , &n);
// // // }
// // // for(int i=0;i<n;i++){
// // //     for(int j=0;j<n;j++){
// // //       if(i == 0 || i == n-1 || j == 0 || j == n-1)putchar('*');
// // //       else
// // //       putchar(' ');

// // //     }printf("\n");
// // // }

// // // }

// // // Γράψτε ένα πρόγραμμα που θα διαβάζει από το χρήστη έναν ζυγό ακέραιο, n ≥ 4, και θα τυπώνει
// // // στην οθόνη το παρακάτω σχήμα, όπου η τελευταία γραμμή έχει ακριβώς n/2 αστερίσκους (το παράδειγμα
// // // είναι για n = 8). Προσέξτε ότι η πρώτη και τελευταία γραμμή τυπώνει αστερίσκους μόνο στις ζυγές στήλες
// // // (ξεκινώντας από το μηδέν δηλ μόνο στις 0, 2, 4 κλπ). Το πρόγραμμά σας θα πρέπει να ελέγχει αν ο αριθμός
// // // που διαβάστηκε είναι ζυγός και μεγαλύτερος ή ίσος του 4, διαφορετικά θα πρέπει να εκτυπώνει μήνυμα
// // // σφάλματος και να τερματίζει την εκτέλεση.
// // // * * * *
// // //  *
// // //   *
// // //    *
// // //     *
// // //      *
// // //       *
// // // * * * *
// // // int main(){
// // //     int n;
// // //     printf("Give me a number bigger than 4\n");
// // //     scanf("%d" , &n);

// // //     if(n<4){
// // //         printf("ERROR");
// // //         return 0;
// // // }
// // //      for(int i=0;i<1;i++){
// // //         for(int j=0;j<(n/2)-1;j++){
// // //             printf("* ");
// // //     }
// // //         }
// // //     for(int i=0;i<n-1;i++){
// // //         for(int j=0;j<n;j++){
// // //            if(i == j) putchar('*');
// // //            else
// // //            putchar(' ');

// // //         }printf("\n");
// // //     }
// // //     for(int i=0;i<1;i++){
// // //         for(int j=0;j<(n/2);j++){
// // //            printf("* ");
// // // }
// // //     }printf("\n");
// // //      }
// // // int main() {
// // // int i;
// // // int a[8] = { 0, 5, 7, 9, 10, 22, 14, 23};
// // // printf("%ls \n", a + 3);
// // // return 0;
// // // }

// // // int main(){
// // //     int num;
    
// // //     scanf("%d" , &num);
// // //     int x,e,d,m;
// // //     x= num / 1000;
// // //     e=(num%1000)/100;
// // //     d=(num%100) / 10;
// // //     m= num%10;
// // //     printf("%d %d %d %d", x ,e ,d , m);

// // // }
// // // int main() {
// // // int i;
// // // float a[5] = { 1.2f, 2.3f, 4.2f, 5.7f, 8.1f};
// // // printf("%.1f %.1f\n", *(a + 3), *a);
// // // return 0;
// // // }
// // #include <stdlib.h>
// // #include<time.h>
// // int main()
// // {
// //     int num[10],ex[10],dx[10],x[10],e[10],d[10],m[10];
// //     int up=1000,lo=100000;
// //     for(int i=0;i<10;i++){
// //         srand(time(NULL));
// //         num[i]=(rand()%(up - lo +1))+lo;
// //         ex[i]=num[i]/100000;
// //         dx[i]=(num[i]%100000)/10000;
// //         x[i]=(num[i]%10000)/1000;
// //         e[i]=(num[i]%1000)/100;
// //         d[i]=(num[i]%100)/10;
// //         m[i]=num[i]%10;

// //     }
// //     for(int i=0;i<10;i++){
// //         printf("%d\nEkatontades xiliades: %d\nDekades xiliades: %d\nXiliades: %d\nEkatontades: %d\nDekades: %d\nMonades: %d\n\n",num[i],ex[i],dx[i],x[i],e[i],d[i],m[i]);
// //     }

// //  }

// #include <stdlib.h>
// #include <time.h>
// int main() {

//     srand(time(NULL));
//     for(int i=0;i<5;i++){
//         for(int j=0;j<6;j++){
//             if(j<5){
//                 printf("%d " ,(rand()%45)+1);
//             }
//             else
//             printf("%d " , (rand()% 20)+1);
//         }printf("\n");
//     }

// }
































#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    srand(time(NULL));
    for(int i=0;i<5;i++){
        for (int  j = 0; j < 6; j++){
            if(j<5){
                printf("%d ", (rand()%45)+1);
            }
            else 
            printf("%d " , (rand()%20)+1);
        }
        printf("\n");
    }
}














