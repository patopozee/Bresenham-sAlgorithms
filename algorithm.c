
int x1, x2, y1, y2,  p, dx, dy;
void draw_line(int x1, int x2, int y1, int y2, int dx, int dy, int p){
  dx=x2-x1; 
  dy=y2-y1;
  p=2*dx-dy;
while(x1<=x2)
{
   draw_pixel(x1,y2);
   x1++;
if(p<0)
      {
    p=p+2*(y2-y1);
      }
      else{
   p=p+2*(y2-y1)-2*(x2-x1);
     y1++;
      }
  }
}
