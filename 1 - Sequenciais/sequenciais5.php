<?php #Faça um programa que converta metros para centímetros. ?>

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 5 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'O valor, em centímetros, é de: ' . ($_GET['metros'] * 100); ?>
    <?php else: ?>
      <form action="sequenciais5.php" method="get">
        Digite um valor, em metros: <input type="text" name="metros"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
