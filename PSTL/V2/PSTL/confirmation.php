<?php
    //Démarrage de la session
    session_start();
?>



<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title>Confirmation</title>
        
        <!-- Latest compiled and minified CSS -->
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css">

        <!-- Optional theme -->
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap-theme.min.css">

        <!-- Latest compiled and minified JavaScript -->
        <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>          
    </head>
    <body>
        <br><br><br><br><br>
        <!-- Barre de navigation -->
        <nav class="navbar navbar-inverse navbar-fixed-top">
            <div class="container">
                <center>
                    <div class="navbar-header">
                    <a class="navbar-brand" href="#">UPMC Master Info</a>
                    </div>
                </center>
                
            
                <?php
                if(isset($_SESSION['nom'])) {
                ?>        
                <form class="navbar-form navbar-right" action="deconnexion.php">
                    <div class="form-group">
                        <a class="navbar-brand" href="#" color="white"><?php echo 'Bonjour '.$_SESSION['nom'];?></a>
                    </div>
                    <button type="submit" class="btn btn-danger">Se déconnecter</button>
                </form>
                <?php
                }
                else {
                ?>
                <form class="navbar-form navbar-right" action="connexion.php" method='POST'>
                    <div class="form-group">
                        <input name='nom' type="text" placeholder="Nom" class="form-control">
                    </div>
                    <div class="form-group">
                        <input name='mdp' type="password" placeholder="Mot de passe" class="form-control">
                    </div>
                    <button type="submit" class="btn btn-danger">Se connecter</button>
                </form>
                <?php
                }
                ?>
            </div>          
        </nav>        
        
        <div class="container theme-showcase" role="main">
              <!-- Main jumbotron for a primary marketing message or call to action -->
        <div class="jumbotron">
        <center><h1>Formulaire Interactif</h1></center>
        <br>
        
        <p>
        Ceci est la page d'accueil du formulaire interactif du Master Informatique de l'UPMC. 
        Ce formulaire permet aux nouveaux inscrits des différents Masters Info de choisir la liste 
        des matières parmi celles proposées afin de pouvoir pré-sélectionner un emploi du temps
        et permettre aux responsables de mieux gérer les horaires des différents cours et TD/TME.
        <br>Veuillez vous identifier afin d'accéder au formulaire.
        </p>
        </div>        
        
        
        <?php
        // put your code here
        ?>
    </body>
</html>
