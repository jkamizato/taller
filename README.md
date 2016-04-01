# Teste taller 
Solução do teste em Drupal 7


## Instalação
Basta fazer um clone do projeto e se precisar, restaurar o banco: 
- Foi criado um dump do banco local em `db/taller.sql`.
- Outra opção é fazer a instalação do zero e restaurar as features 'ticket' e 'resposta'


## Teste Unitário
Foram escritos 2 tipos de testes:
 - Módulos. Onde foi testado os métodos de controller e model
 - Integração. Onde foi testado a presença de componentes na tela. Para tal foi utilizado selenium.

Os testes estão na pasta `sites/all/test`.

Fiz a chamada do arquivo `sites/all/test/phpunit_bootstrap.inc`, que basicamente carrega o core do Drupal para uma possível utilização dentro do teste.
 
### Rodando os testes
Na pasta raiz do projeto, basta rodar o comando `./sites/all/vendor/bin/phpunit sites/all/test`

### Rodando os testes completo (com selenium)
Antes de rodar o comando acima, terá que abrir uma nova aba do terminal, 
entrar na pasta `/sites/all/vendor/bin` e deixar rodando o comando `java -jar selenium-server-standalone-2.53.0.jar`, 
para rodar o selenium.


## Overview do sistema

### Camada OO
Dentro dos módulos, criei o Controller e Model para poder realizar teste da regra de negócio.

### Usuários (login:senha)
- admin:123
- cliente:123
- atendente:123

### Papéis
Fora criados os papéis 'cliente' e 'atendente' cada um com sua regra para exibir campos e menus correspondentes.

