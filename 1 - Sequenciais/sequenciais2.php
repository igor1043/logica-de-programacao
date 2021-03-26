<?php #Faça um programa que peça um número e então mostre a mensagem: "O número informado foi {numero}. ?>

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 2 - PHP</title>
  </head>
  <body>
    <?php
      if (!empty($_GET))
      {
        echo "O número informado foi: " . $_GET['numero'];
      }
      else
      {
        echo '
        <form action="sequenciais2.php" method="get">
          Digite um número: <input type="text" name="numero"/>
          <input type="submit" value="Enter">
        </form>';
      }
    ?>
  </body>
</html>
