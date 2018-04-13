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
				include "menu2.inc";
				echo "<h2>Seja bem-vindo(a)!</h2>";
				if(empty($_POST)){
					include "saldo.inc";
					include "form_Opc.inc";
				}else{
					ler_dados_Opc();
				}
				include "rodape.inc";
			?>	
		</div>
	</body>
</html>





