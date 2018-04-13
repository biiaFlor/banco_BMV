	<?php
		function ler_dados_usuario(){
			if(!isset($_SESSION["contadorUsuario"])){
				// registra as variáveis na sessão
				$_SESSION["nomesUsuario"][0] = $_POST["nome"];
				$_SESSION["dataUsuario"][0] = $_POST["data"];
				$_SESSION["senhaUsuario"][0] = $_POST["senha"];
				$_SESSION["contaUsuario"][0] = $_POST["conta"];
				$_SESSION["contadorUsuario"] = 0;
				$valor_disp = 0;
				$_SESSION["valor_disp"][0] = $valor_disp;
				
				echo "<article><br/><br/><div class=\"center\">
					<h2>Usuário cadastrado com sucesso.</h2></div>
					<br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
					<br/><br/><br/><br/></article>";
			}else{
				$contadorUsuario = $_SESSION["contadorUsuario"]++;
				$nomesUsuario = $_SESSION["nomesUsuario"][$contadorUsuario];
				$contaUsuario = $_SESSION["contaUsuario"][$contadorUsuario];
				$nome = $_POST["nome"];
				$conta = $_POST["conta"];
				$existe = 0;
				
				for($i=0; $i<=$contadorUsuario;$i++){
					if($_SESSION["nomesUsuario"][$contadorUsuario] == $nome || $_SESSION["contaUsuario"][$contadorUsuario] == $conta){
						echo "<article><br/><br/><div class=\"center\">
						<h2>Usuário/Conta já cadastrado</h2></div>
						<br/><br/><br/><br/><br/><br/><br/>
						<a href = \"form_cadastro_usuario.php\"> Cadastre uma nova conta </a></article>";
						$existe = 1;
						break;
					}
				}
				
				if($existe == 0){
					$_SESSION["contadorUsuario"]++;
					$contadorUsuario = $_SESSION["contadorUsuario"];
					$_SESSION["nomesUsuario"][$contadorUsuario] = $_POST["nome"];
					$_SESSION["dataUsuario"][$contadorUsuario] = $_POST["data"];
					$_SESSION["senhaUsuario"][$contadorUsuario] = $_POST["senha"];
					$_SESSION["contaUsuario"][$contadorUsuario] = $_POST["conta"];
					$valor_disp = 0;
					$_SESSION["valor_disp"][$contadorUsuario] = $valor_disp;
					
					echo "<article><br/><br/><div class=\"center\">
					<h2>Usuário cadastrado com sucesso</h2></div>
					<br/><br/><br/><br/><br/><br/><br/>
					<a href = \"form_cadastro_usuario.php\"> Cadastre uma nova conta </a></article>";
				}
		
			}
		}
		
		function ler_dados_login(){
			
			if(!isset($_SESSION["contadorLogin"])){
				$_SESSION["nomeUsuario"][0] = $_POST["nomeUsuario"];
				$_SESSION["senhaLogin"][0] = $_POST["senhaLogin"];
				$_SESSION["contadorLogin"] = 0;
			}else{
				$_SESSION["contadorLogin"]++;
				$contador = $_SESSION["contadorLogin"];
				$_SESSION["nomeUsuario"][$contador] = $_POST["nomeUsuario"];
				$_SESSION["senhaLogin"][$contador] = $_POST["senhaLogin"];
			}
			
			$nomeUsuario = $_POST["nomeUsuario"];
			$senhaLogin = $_POST["senhaLogin"];
			$contadorUsuario = $_SESSION["contadorUsuario"];
			$nomesUsuario = $_SESSION["nomesUsuario"];
			
			$naoExiste = 1;
			
			//echo $nomeUsuario;
			//echo $_SESSION['$nomeUsuario'];
			//echo $_SESSION['contadorUsuario'];
			//var_dump($nomeUsuario);
			//var_dump($nomesUsuario);
			//var_dump($senhaUsuario);
			//var_dump($senhaLogin);
			for($i=0; $i<=$contadorUsuario; $i++){
				if($_SESSION["nomesUsuario"][$i] == $nomeUsuario && $_SESSION["senhaUsuario"][$i] == $senhaLogin){
					header ("Location: form_cadastro_opc.php");
				}
			}
			
			if($naoExiste == 1){
				echo "<article><div class=\"center\">
				<h2>Usuario ou senha não identicados.</h2></div><br/><br/></article>";
				echo "<a href = \"form_login.php\"> Tentar Novamente </a><br>";
				echo "<a href = \"form_cadastro_usuario.php\"> Cadastre uma nova conta </a>";
			}
		}
		
		
		function ler_dados_Opc(){
			if(!isset($_SESSION["contadorOpc"])){
				// registra as variáveis na sessão
				$_SESSION["opc"][0] = $_POST["opc"];
				$_SESSION["valor"][0] = $_POST["valor"];
				$_SESSION["contadorOpc"] = 0;
			}
			else{
				$_SESSION["contadorOpc"]++;
				$contadorOpc = $_SESSION["contadorOpc"];
				$_SESSION["opc"][$contadorOpc] = $_POST["opc"];
				$_SESSION["valor"][$contadorOpc] = $_POST["valor"];
			}
			$contadorOpc = $_SESSION["contadorOpc"];
			$contadorUsuario = $_SESSION["contadorUsuario"];
			$opc = $_SESSION["opc"][$contadorOpc];
			$valor = $_SESSION["valor"][$contadorOpc];
			$valor_disp = $_SESSION["valor_disp"][$contadorUsuario];
			
			switch($opc){
				case 1:
					if($valor > $valor_disp){
						echo "<article><br/><br/><div class=\"center\">
						<h2>Operação não pode ser realizada, verifique seu saldo.</h2></div>
						<a href = \"form_cadastro_Opc.php\"> Tentar novamente </a>
						<br/><br/><br/><br/><br/><br/><br/><br/></article>";
						
					}
					else{
						$valor_disp = $valor_disp - $valor;
						$_SESSION["valor_disp"][$contadorUsuario] = $valor_disp;
						echo "<article><div class=\"center\">
						<h2>Operação realizada com sucesso.</h2></div>
						<a href = \"form_cadastro_Opc.php\"> Fazer outra operação </a><br/><br/></article>";
						include "saldo.inc";
						
					}
				break;
				
				case 2:
					$valor_disp = $valor_disp + $valor;
					$_SESSION["valor_disp"][$contadorUsuario] = $valor_disp;
					
					echo "<article><div class=\"center\">
					<h2>Operação realizada com sucesso.</h2></div>
					<br/><br/><a href = \"form_cadastro_Opc.php\"> Fazer outra operação </a></article>";
					include "saldo.inc";
				break;
			}
			
		}
		
		function selecionar_usuario(){
			$nomesUsuario = $_SESSION["nomesUsuario"];
			$contadorUsuario = $_SESSION["contadorUsuario"];
			for($i = 0; $i <= $contadorUsuario; $i++){
				$nomeUsuario = $_SESSION["nomesUsuario"][$i];
				echo "<option value=\"$nomeUsuario\">$nomeUsuario</option>";
			}
		}
		
		function encerrar(){
			session_destroy();
		}
	?>