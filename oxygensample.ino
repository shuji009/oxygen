// �_�f�Z���T�[�̃T���v��
// �Z���T�[�͕⒮��p�d�rPR44���g�p
// arduino-UDE�� tool -> �V���A���v���b�g�@�ŗ��p�\
//
void setup() {
	Serial.begin(115200);
}
void loop() {
	int v = analogRead(A0); // A0�ɓd�r�́{�@��R����ĂˁB
	Serial.println(v);
	delay(50); //�@�����Ȃ̂�50ms���ɂ��Ă���
}

