char EntradaDados = 0;
int num = 0;

int dobra(int a){
  return (a + a);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    EntradaDados = Serial.read();
  }

  

  if(EntradaDados != 0){
    if (isDigit(EntradaDados)) {  // Verificar se o caractere ASCII é um dígito entre 0 e 9
      num = (EntradaDados - '0');
      Serial.print("Dobro de ");
      Serial.print(num);
      Serial.print(" eh ");
      Serial.print(dobra(num));
      Serial.print("\n");
      EntradaDados = 0;
    }
  }
  
}



