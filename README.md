# Projeto de Gerenciamento de Pacientes e Exames

Este projeto consiste em simular o processo de realização de exames de raio-X de tórax em um hospital, com ênfase na organização da fila para laudo médico. Por enquanto foram apenas implementados dois tipos abstratos de dados (TADs): Patient e
Exam Esses TADs serão utilizados para modelar os pacientes que chegam ao hospital e os exames de raio-X.

## Estrutura do Projeto

O projeto contem os seguintes arquivos:

- **patient.h**
  - Definição da estrutura `Patient`.
  - Declarações das funções para criar, destruir e obter informações de um paciente.

- **patient.c**
  - Implementação da estrutura `Patient`.
  - Implementação das funções para criar, destruir e obter informações de um paciente.

- **exam.h**
  - Definição da estrutura `Exam`.
  - Declarações das funções para criar, destruir e obter informações de um exame.

- **exam.c**
  - Implementação da estrutura `Exam`.
  - Implementação das funções para criar, destruir e obter informações de um exame.

## Principais TADs (Tipos Abstratos de Dados)

### Estrutura `Patient`

A estrutura `Patient` representa um paciente e contém os seguintes campos:

- `int id`: Identificador único do paciente.
- `char* name`: Nome do paciente.
- `struct tm* birthdate`: Ponteiro para a data de nascimento do paciente.
- `struct tm* arrival`: Ponteiro para a data de chegada do paciente.

### Estrutura `Exam`

A estrutura `Exam` representa um exame e contém os seguintes campos:

- `int id`: Identificador único do exame.
- `int patient_id`: Identificador do paciente associado ao exame.
- `int rx_id`: Identificador do aparelho de raio-x associado ao exame
- `struct tm* time`: Ponteiro para a data e hora do exame.

## Funcionalidades

### Pacientes

- **Criar um novo paciente**: A função `create_Patient` permite a criação de um novo paciente.
- **Destruir um paciente**: A função `destroy_patient` libera a memória alocada para um paciente.
- **Obter informações do paciente**: As funções `get_patient_id`, `get_patient_name` e `get_patient_birthdate` permitem obter o ID, nome e data de nascimento do paciente, respectivamente.

### Exames

- **Criar um novo exame**: A função `create_exam` permite a criação de um novo exame.
- **Destruir um exame**: A função `destroy_exam` libera a memória alocada para um exame.
- **Obter informações do exame**: As funções `get_exam_id`, `get_exam_patient_id`, `get_exam_rx_id` e `get_exam_time` permitem obter o ID do exame, ID do paciente, ID do aparelho de raio-x e data/hora do exame, respectivamente.

## Como Executar e Utilizar o Projeto

Para compilar e executar o projeto, siga os passos abaixo:

1. Compile os arquivos `patient.c` e `exam.c` junto com seu arquivo principal(por exemplo, `main.c`)
2. Execute o arquivo Makefile usando o comando "make" em linux ou "mingw32-make" em windows.
