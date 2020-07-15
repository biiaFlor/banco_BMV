<?php
	$contadorUsuario = $_SESSION["contadorUsuario"];
	$valor_disp = $_SESSION["valor_disp"][$contadorUsuario];
	echo "<article>";
		echo "<h2>Seu saldo é de R$" . $valor_disp . "</h2>";
	echo "</article>";
?>