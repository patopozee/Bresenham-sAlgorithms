void bresenham_circle(int r)
{
  int x=0,y=r;
  float p=(5.0/4.0)-r;
  plot_point(x,y);
  int k;
  while(x<y)
  {
    x = x+1;
    if(p<0)
      p=p+2*x+1;
    else
    {
      y=y-1;
      p=p+2*(x-y)+1;
    }
    plot_point(x,y);
  }
  glFlush();
}

