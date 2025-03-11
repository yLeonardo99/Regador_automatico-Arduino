# 🌱 Regador Automatizado - Projeto de Automação com Arduino  

**👨‍💻 Autor:** Leonardo Cassiano dos Santos  

**📅 Data:** 27/09/2023  
**🔖 Versão:** 1.0  
---

## 🌟 Funcionalidades  

- **Monitoramento de Umidade do Solo:** O sensor de umidade mede a quantidade de água no solo e exibe o valor em porcentagem no display LCD.  
- **Monitoramento de Temperatura:** O sensor de temperatura mede a temperatura ambiente e exibe o valor em graus Celsius no display LCD.  
- **Controle Automático de Irrigação:** O sistema aciona a bomba de água automaticamente quando a umidade do solo está abaixo de 20% ou a temperatura está acima de 35°C.  
- **Display LCD:** Exibe as informações de umidade e temperatura em tempo real.  

---

## 🛠️ Tecnologias Utilizadas  
- **C++:** Linguagem de programação utilizada para desenvolver o código do Arduino.  
- **Arduino IDE:** Ambiente de desenvolvimento para programação do Arduino.  
- **Eletrônica Básica:** Utilização de sensores, relé, display LCD e componentes eletrônicos para montagem do circuito.  

---

## 📸 Imagens do Projeto  
![imagem do projeto](https://raw.githubusercontent.com/yLeonardo99/Regador_automatico-Arduino/refs/heads/main/REGADOR%20AUTOM%C3%81TICO.png)

---

## 🔧 Componentes Utilizados  

- 1 Arduino Uno R3  
- 1 Relé DPDT  
- 1 LED (para indicar o acionamento da bomba)  
- 1 Sensor de Umidade do Solo  
- 1 Sensor de Temperatura  
- 1 Display LCD 16x2 (I2C)  
- Jumpers e protoboard para conexões  

---

## 📂 Estrutura do Projeto  
- **RegadorAutomatizado.ino:** Código-fonte do projeto.  
- **README.md:** Documentação do projeto (este arquivo).  
- **esquema-circuito.png:** Imagem do esquema do circuito.
- **video-funcionamento:** video simples do esquema do circuito.  

---

## 🌍 Como Executar o Projeto 

1. **Montagem do Circuito:**
   - Conecte o sensor de umidade ao pino analógico **A0** do Arduino.  
   - Conecte o sensor de temperatura ao pino analógico **A1** do Arduino.  
   - Conecte o relé ao pino digital **8** do Arduino.  
   - Conecte o display LCD 16x2 via interface I2C.  

3. **Carregar o Código:**  
   - Abra o código RegadorAutomatizado.ino no Arduino IDE.  
   - Conecte o Arduino ao computador e carregue o código.  

4. **Funcionamento:**  
   - O display LCD exibirá a umidade do solo e a temperatura ambiente.  
   - Quando a umidade estiver abaixo de 20% ou a temperatura acima de 35°C, o relé será acionado, ligando a bomba de água por 3 segundos.  
   - O sistema continuará monitorando e ajustando automaticamente.  

---

## 🎥 Demonstração do Projeto

https://github.com/user-attachments/assets/e88de359-17f2-4a74-9f8f-2d227aa488cb
