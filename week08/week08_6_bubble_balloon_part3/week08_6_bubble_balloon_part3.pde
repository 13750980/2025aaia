// week08_6_bubble_balloon_part3
void setup(){
  size(500, 400);
}
void draw(){
  background(204);
  for(int i=0; i<n; i++){
    ellipse(x[i], y[i]-s[i]/2, s[i]*0.75, s[i]);
    if(mousePressed && i==n-1) s[i] += 2; // 一直壓著mouse會變大
    if(mousePressed==false || i!= n-1 || y[i]>s[i]) y[i]-=2; //沒有按 mouse 就飛上去
  }
}
float []x = new float[100]; //
float []y = new float[100];
float []s = new float[100]; //
int n = 0; //
void mousePressed(){
  x[n] = mouseX; // 氣球座標
  y[n] = mouseY; 
  s[n] = 1; // 氣球一開始大小是 1 
  n++;
}
