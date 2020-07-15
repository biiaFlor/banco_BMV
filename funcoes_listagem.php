<?php
	function lista_usuarios(){
		$contadorUsuario = $_SESSION["contadorUsuario"];
		for($i = 0; $i <= $contadorUsuario; $i++){
			$nome = $_SESSION["nomesUsuario"][$i];
			$data = $_SESSION["dataUsuario"][$i];
			$conta = $_SESSION["contaUsuario"][$i];
			echo "<tr>";
			echo "<td>$nome</td>";
			echo "<td>$data</td>";
			echo "<td>$conta</td>";
			echo "</tr>";
		}
	}
?>
