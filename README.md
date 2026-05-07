# Projeto PWM Controller

## Introdução ao PWM
O PWM é uma técnica utilizada para controlar a velocidade de motores DC, variando o tempo em que o sinal permanece em nível alto (Duty Cycle).

## Componentes necessários
- NodeMCU
- Motor L293D
- Motor DC
- Botão Pulsador
- Osciloscópio
- Resistor 10k
- Bateria 5V

## Esquemático
A foto está acima

## Código-fonte
O código fonte está dentro da pasta ''src''

## Instruções de montagem
na aula prática!!

## Funcionamento do projeto
O motor inicia parado. A cada vez que o botão é pressionado, a velocidade do motor aumenta em degraus (64, 127, 191, 255 no analogWrite). Após atingir a velocidade máxima, o próximo clique faz o motor parar, reiniciando o ciclo.
