#include <stdio.h>

int main() {

    int a1,a2,a3,a4,point ; 
    
printf("스마트폰으로 게임을 1시간 이상 하나요(1.예, 2. 아니오)\n");
scanf("%d", &a1);

if(a1==2) {
    printf("하루에 평균 2시간 이상 쉬지 않고 스마트폰을 하나요?(1.예, 2. 아니오)\n");
    scanf("%d",&a2);
        if (a2==1) {
        point += 2; }
        else 
        point += 0;  }
else {  //스마트폰 겜을 1시간 이상 할때 
    point += 2;
    printf("스마트폰으로 게임을 평균 2시간 이상 하나요(1.예, 2. 아니오)\n");
    scanf("%d",&a3);
        if (a3==1) {//평균 2시간 이상 한다면 
            point += 2;
             }
        else { //평균 2시간 이상 하지 않는다면 
            printf("한번에 4시간 이상 한적이 있나요(1.예, 2. 아니오)\n");
            scanf("%d",&a4) ;
             if (a4==1)//한번에 4시간 이상 한적 있다면 
                point += 1; //1점추가
            else 
            point += 0; }
        }
        

printf("스마트폰 중독 총 점수는 %d점입니다\n", point);


    return 0;
}
