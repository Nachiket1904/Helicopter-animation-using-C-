#include<conio.h>
#include<graphics.h>
#include<direct.h>
//Animation

void Helicopter();
void Go();
int main()
{
  int gd=DETECT, gm;
  initgraph(&gd, &gm,(char*)"");
  Go();
  Helicopter();
  getch();
  closegraph();
}

//This Go is only to make it stand for some time

 void Go(){

//...........     For Background   .........

 for(int l=0;l<50;l++){
  int b=0;                                      //Speed of y-axis of helicoptor
  int c=0;                                      //Speed of x-axis of helicoptor
 // Helicopter
  line(216+c,235-b,75+c,235-b);
  line(115+c,247-b,120+c,240-b);           //UpperBackSmallInclinedLine
  line(166+c,247-b,161+c,240-b);            //UpperFrontSmallInclinedLine
  line(120+c,240-b,161+c,240-b);                //UpperHorizontallLIne
  line(139+c,240-b,139+c,235-b);              //SmallBAckVerticalLIne
  line(141+c,240-b,141+c,235-b);                //SmallFrontVerticalLine
  arc(141+c,272-b,140,180,40);                     //BackArc
  arc(140+c,272-b,0,40,40);                          //FrontArc
  line(165+c,248-b,165+c,266-b);                //Glass
  line(165+c,266-b,180+c,266-b);                //Glass
  rectangle(130+c,282-b,150+c,255-b);       //Door
  circle(147+c,268-b,1);                               //KeyHole
  line(110+c,247-b,171+c,247-b);               //MiddleLine
  line(30+c,275-b,100+c,272-b);                 //backUpperLine
  line(180+c,273-b,180+c,285-b);               //frontArcVerticalLine
  line(25+c,285-b,180+c,285-b);                 //BottomBigLine
  line(30+c,275-b,20+c,260-b);                   //BackEndInclinedLine
  line(20+c,260-b,14+c,260-b);                   //BackUpperLine
  line(14+c,260-b,25+c,285-b);                   //LastEndInclinedLine
  circle(18+c,262-b,1);                                //BackSmallCircle
  //Legs
  line(80+c,299-b,167+c,299-b);                 //LowerBigLine
  line(80+c,295-b,167+c,295-b);                 //UpperBigLine
  line(80+c,295-b,80+c,299-b);                  //BackVerticalLine
  arc(167+c,279-b,270,310,20);                  //LowerCurve
  arc(167+c,275-b,270,310,20);                  //UpperCurve
  line(180+c,291-b,180+c,293-b);                //FrontSmallestLine
  line(110+c,285-b,110+c,295-b);                //StraightLine
  line(113+c,285-b,113+c,295-b);                //StraightLine
  line(165+c,285-b,160+c,295-b);                //VerticalLine
  line(163+c,285-b,158+c,295-b);
  setcolor(WHITE);
  delay(30);
  cleardevice();
 }

 }

//For Helicopter

void Helicopter(){

 for(int i=0;i<=350;i++) {
  int b=i;   //Speed of y-axis of helicoptor
  int c=i*2;  //Speed of x-axis of helicoptor. It will move twice faster than y a-axis.
 // Helicopter
  line(115+c,247-b,120+c,240-b);                //UpperBackSmallInclinedLine
  line(166+c,247-b,161+c,240-b);                //UpperFrontSmallInclinedLine
  line(120+c,240-b,161+c,240-b);                //UpperHorizontallLIne
  line(139+c,240-b,139+c,235-b);                //SmallBAckVerticalLIne
  line(141+c,240-b,141+c,235-b);                //SmallFrontVerticalLine
  arc(141+c,272-b,140,180,40);                  //BackArc
  arc(140+c,272-b,0,40,40);                         //FrontArc
  line(165+c,248-b,165+c,266-b);                //Glass
  line(165+c,266-b,180+c,266-b);                //Glass
  rectangle(130+c,282-b,150+c,255-b);         //Door
  circle(147+c,268-b,1);                                //KeyHole
  line(110+c,247-b,171+c,247-b);                 //MiddleLine
  line(30+c,275-b,100+c,272-b);                   //backUpperLine
  line(180+c,273-b,180+c,285-b);                //frontArcVerticalLine
  line(25+c,285-b,180+c,285-b);                 //BottomBigLine
  line(30+c,275-b,20+c,260-b);                  //BackEndInclinedLine
  line(20+c,260-b,14+c,260-b);                  //BackUpperLine
  line(14+c,260-b,25+c,285-b);                  //LastEndInclinedLine
  circle(18+c,262-b,1);                               //BackSmallCircle
  //Legs
  line(80+c,299-b,167+c,299-b);                 //LowerBigLine
  line(80+c,295-b,167+c,295-b);                 //UpperBigLine
  line(80+c,295-b,80+c,299-b);                  //BackVerticalLine
  arc(167+c,279-b,270,310,20);                  //LowerCurve
  arc(167+c,275-b,270,310,20);                  //UpperCurve
  line(180+c,291-b,180+c,293-b);                //FrontSmallestLine
  line(110+c,285-b,110+c,295-b);                //StraightLine
  line(113+c,285-b,113+c,295-b);                //StraightLine
  line(165+c,285-b,160+c,295-b);                //VerticalLine
  line(163+c,285-b,158+c,295-b);                //VerticalLine
  //MovingWings
  if(i%2==0){
   line(141+c,235-b,75+c,243-b);
   line(141+c,235-b,83+c,258-b);
   line(141+c,235-b,164+c,278-b);
   line(141+c,235-b,99+c,268-b);
   line(141+c,235-b,196+c,243-b);
   line(141+c,235-b,195+c,258-b);
 }
  else{
   line(141+c,235-b,71+c,236-b);
   line(141+c,235-b,79+c,250-b);
   line(141+c,235-b,110+c,278-b);
   line(141+c,235-b,197+c,236-b);
   line(141+c,235-b,196+c,250-b);
   line(141+c,235-b,185+c,267-b);
   line(141+c,235-b,141+c,282-b);
   }
  delay(30);
  cleardevice();
  }
}