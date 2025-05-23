// week14_5_sound
// Sketch - Library - Manage Libraries...
// 安裝 Sound 後, 開始寫
// File - Examples - Libraries核心函式庫 - Sound - Soundflie - JumbleSoundfile 範例
// 再自己寫
import processing.sound.*; // Java 使用 Sound 外掛
SoundFile music, sword, monkey, intro; // 宣告一個變數 music
void setup(){
  size(640, 360); // 記得要把音樂檔, 拉到程式裡
  music = new SoundFile(this, "In Game Music.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  monkey = new SoundFile(this, "Monkey 1.mp3");
  intro = new SoundFile(this, "Intro Song_Final.mp3"); // 今天就沒有用到
  music.play(); // play()播放
}
void mousePressed(){ //按下 mouse
  if(mouseButton==LEFT) sword.play(); // 按下左鍵(揮劍)
  else monkey.play(); // 按下右鍵(猴叫)
}
void draw(){
 // 裡面是空白的
}
