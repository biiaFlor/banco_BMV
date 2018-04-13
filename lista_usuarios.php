<?php
	session_start();
?>
<html lang="pt-BR">
	<head>
		<head>
		<meta charset="utf-8">
		<title> Banco BMV </title>
		<link rel="stylesheet" href="estilos.css">
	</head>
	</head>
	<body>
		<div class="container">
			
			<?php
				include "funcoes_listagem.inc";
				include "cabecalho.inc";
				include "menu.inc";
				
				
				
				if(isset($_SESSION["contadorUsuario"])){
					include "tabela_usuarios.inc";
				}else{
					echo "<article><br/><br/><div class=\"center\">
						<h2>Nenhum usuário cadastrado.</h2></div></article>";
				}
				include "rodape.inc";
			?>	
		</div>
	</body>
</html>		
		
		
		