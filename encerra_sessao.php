<?php
	session_start();
?>
<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<title>Banco BMV</title>
		<link rel="stylesheet" href="estilos.css">
	</head>
	<body>
		<div class="container">
			
				<?php
					include "funcoes.inc";
					encerrar();
					include "cabecalho.inc";
					include "menu.inc";
					include "conteudo2.inc";
					include "rodape.inc";
				?>
					
		</div>
	</body>
</html>