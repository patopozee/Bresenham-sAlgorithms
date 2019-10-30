{
int x, y, x1, y1;
int p, dx, dy;
  dx=x2-x1; 
  dy=y2-y1;
  p=2*dx-dy;
while(x<=x2)
{
   putpixel(x,y);
   x++;
if(p<0)
      {
    p=p+2*(y1-y)
      }
      else{
   p=p+2*(y1-y)-2*(x1-x);
     y++;
      }
  }


