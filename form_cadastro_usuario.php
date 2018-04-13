<?php
	session_start();
?>
<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<title> Banco BMV </title>
		<link rel="stylesheet" href="estilos.css">
	</head>
	<body>
		<div class="container">
			
			<?php
				include "funcoes.inc";
				include "cabecalho.inc";
				include "menu.inc";
				if(empty($_POST)){
					include "form_usuario.inc";
				}else{
					ler_dados_usuario();
				}
				include "rodape.inc";
			?>	
		</div>
	</body>
</html>





