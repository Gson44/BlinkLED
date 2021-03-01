#include<stdio.h>
#include<unistd.h>
int main(){
        //Create a file pointer
        FILE *fp;

        //Open the gpio20 directory and add
        //1 and 0 to the value
        //1 = LED ON
        //0 = LED OFF
        for(int x = 0; x < 10; x++){
          fp = fopen("/sys/class/gpio/gpio20/value", "w+");
          fputs("1", fp);
          fclose(fp);
          sleep(1);
          fp = fopen("/sys/class/gpio/gpio20/value", "w+");
          fputs("0", fp);
          fclose(fp);
          sleep(1);
        }
}