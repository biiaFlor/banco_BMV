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
				include "cabecalho.inc";
				include "menu.inc";
				if(empty($_POST)){
					include "form_login.inc";
				}else{
					ler_dados_login();
				}
				include "rodape.inc";
			?>	
		</div>
	</body>
</html>





