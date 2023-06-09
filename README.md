# Projeto de Animação com Tiras de LED em Arduino

Este projeto consiste na criação de uma animação usando tiras de LED controladas por um Arduino. A animação será exibida na forma de padrões de luzes sequenciais, proporcionando um efeito visual interessante.

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Espressif](https://img.shields.io/badge/espressif-E7352C.svg?style=for-the-badge&logo=espressif&logoColor=white)
![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)
![Windows 11](https://img.shields.io/badge/Windows%2011-%230079d5.svg?style=for-the-badge&logo=Windows%2011&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Bluetooth](./imgs/ble_badge.svg)

* * *

## Sumario

- [Projeto de Animação com Tiras de LED em Arduino](#projeto-de-animação-com-tiras-de-led-em-arduino)
  - [Sumario](#sumario)
  - [Componentes Necessários](#componentes-necessários)
  - [Matriz de LED Animada](#matriz-de-led-animada)
  - [Pré-requisitos](#pré-requisitos)
  - [Esquema de Conexão](#esquema-de-conexão)
  - [Instalação](#instalação)
  - [Execução](#execução)
  - [TO DO](#to-do)
  - [Data Final 📆](#data-final-)

## Componentes Necessários

- Arduino Uno
- Tira de LED RGB endereçável
- Cabos de conexão
- Fonte de alimentação para a tira de LED
- Protoboard (opcional)

## Matriz de LED Animada

Neste projeto, criaremos uma animação para uma matriz de LED usando Markdown.

## Pré-requisitos

- Placa Arduino compatível
- Tira de LED endereçável
- Biblioteca FastLED (instalada usando o PlatformIO)

## Esquema de Conexão

Conecte a tira de LED ao Arduino da seguinte maneira:

Pinos da tira | Função
:----|:----
DIN | --> Pino Digital do Arduino
VCC | --> 5V do Arduino
GND | --> GND do Arduino

Se estiver utilizando uma protoboard, faça as conexões entre o Arduino, a tira de LED e a fonte de alimentação na protoboard para facilitar a organização dos fios.

* * *

## Instalação

Instale os programas:

[![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)](https://code.visualstudio.com/download)

Instale a extensão PlatformIO:

[![Platform Io](./imgs/PlatformIO_logo.svg)](https://platformio.org/install/ide?install=vscode)

Se o computador ficar muito lento desinstale o Vscode e instale o Sublime Text:

[![Sublime Text](./imgs/sublime-text.svg)](https://www.sublimetext.com/download_thanks?target=win-x64)

Instale o python (tenha certeza de adicionar o python a suas variaveis de ambiente):

[![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)](https://www.python.org/ftp/python/3.11.3/python-3.11.3-amd64.exe)

![Img](imgs/python-installer-add-path.png)

Instale o PlatformIO via pip:

~~~shell
pip install -U platformio
~~~

Instale o proteus:

* * *

## Execução

Para executar o código usando o PlatformIO, siga as etapas abaixo:

Certifique-se de ter o PlatformIO instalado no seu ambiente de desenvolvimento. Você pode instalá-lo como uma extensão no Visual Studio Code ou como um plugin para outros editores de texto.

Crie um novo projeto do PlatformIO ou abra um projeto existente que esteja configurado para o seu ambiente de desenvolvimento.
No diretório do projeto, navegue até a pasta "src" e crie um novo arquivo chamado "main.cpp".
Copie o código do programa para o arquivo "main.cpp".

Verifique se o arquivo "platformio.ini" está presente na raiz do projeto. Esse arquivo contém as configurações do projeto.
Abra o arquivo "platformio.ini" e verifique se a placa Arduino correta está selecionada nas configurações do ambiente (por exemplo, board = uno).

Conecte o Arduino ao seu computador por meio do cabo USB.

No PlatformIO, abra o terminal embutido ou um terminal externo na pasta do projeto.
Execute o comando pio run para compilar o código e verificar se há erros.

~~~shell
pio run
~~~

Após a conclusão da compilação sem erros, execute o comando

Carrega o código no Arduino`

~~~shell
pio run --target upload
~~~

upload para enviar o código compilado para o Arduino.

Aguarde o término do processo de upload e verifique se o código foi executado com sucesso no Arduino.
Certifique-se de que o PlatformIO esteja configurado corretamente com as bibliotecas necessárias para o controle da tira de LED, como a biblioteca FastLED. Se você não tiver instalado as bibliotecas, você pode adicioná-las ao arquivo "platformio.ini" na seção `[env:megaatmega2560]` usando a diretiva lib_deps, por exemplo:

Esquema Proposto:

![Esquema Elétrico](imgs/esquema.svg)

* * *

## TO DO

A fazer:

- [ ] Instalar VSCode
- [ ] Instalar o Platform IO
- [ ] Instalar o Proteus
- [ ] Simular o projeto no Proteus

Feito :fist_right:

- [x] Começar

## Data Final 📆

20/08/2023
