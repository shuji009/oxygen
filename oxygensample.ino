// 酸素センサーのサンプル
// センサーは補聴器用電池PR44を使用
// arduino-IDEの tool -> シリアルプロット　で利用可能
//
void setup() {
	Serial.begin(115200);
}
void loop() {
	int v = analogRead(A0); // A0に電池の＋　抵抗入れてね。
	Serial.println(v);
	delay(50); //　試験なので50ms毎にしている
}

