// week17_2_zongzi_part2
// 修改至 week17_1_zongzi_part1
// 現在粽子要往下掉 配合 mouse 會放粽子

PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png"); // 剛剛有把圖檔拉進程式裡
}
float x, y; // 只有 1 顆粽子的座標
void draw(){
  background(204); // 204=灰色
  imageMode(CENTER); // 畫圖, 圖片的座標, 把它設在中心點的座標, 不要用左上角
  if(x>0){ // 按下 mouse 會設定 x ,y 就不會是 0 , 才畫出來
    image(zongzi, x, y, 100, 100); // 把粽子, 畫在 x, y 的座標
    y++; // 座標往下, 代表粽子往下
  }
}
void mousePressed(){ // 使用 week04 的餵飼料的方法, 讓粽子往下掉
  x = mouseX;
  y = mouseY;
}
