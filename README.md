# Teste taller 
Solução do teste em Drupal 7


## Instalação
Foi criado um dump do banco local em `db/taller.sql`
Outra opção é fazer a instalação do zero e restaurar as features 'ticket' e 'resposta'


## Teste Unitário
Foram escritos 2 tipos de testes:
 - Módulos. Onde foi testado os métodos de controller e model
 - Integração. Onde foi testado a presença de componentes na tela. Para tal foi utilizado selenium.
 - Os testes estão na pasta `sites/all/test`
 
### Rodando os testes
Na pasta raiz do projeto, basta rodar o comando `./sites/all/vendor/bin/phpunit sites/all/test`

### Rodando os testes completo (com selenium)
Antes de rodar o camando acima, terá que abrir uma nova aba do terminal, 
entrar na pasta `/sites/all/vendor/bin` e deixar rodando o comando `java -jar selenium-server-standalone-2.53.0.jar`, 
para rodar o selenium.


## Usuários (login:senha)
- admin:123
- cliente:123
- atendente:123
