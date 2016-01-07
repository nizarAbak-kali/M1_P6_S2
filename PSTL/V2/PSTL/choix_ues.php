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
        <title>Choix des UEs</title>
        
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
                
            <?php
            
                try {
                    //Connexion à la base upmc_info
                    $bdd = new PDO('mysql:host=localhost;dbname=upmc_info', 'root', '');
                }
                catch(Exception $e) {
                    //En cas d'erreur, on affiche un message et on arrête tout
                    die('Erreur : '.$e->getMessage());
                }        
            
                /********** LISTE DES UES OBLIGATOIRES **********/
                //Préparation de la requête pour sélectionner les UES Obligatoires
                $reponse = $bdd->prepare("SELECT * FROM ue_obligatoire WHERE ID_parcours = ? AND semestre = ?");
                $reponse->bindParam(1, $_SESSION['ID_parcours']);
                $reponse->bindParam(2, $_SESSION['semestre']);   
                //Lancement de la requête
                $reponse->execute();
                //Affichage des UES Obligatoires
                ?>
                <h2>Liste des UES Obligatoires</h2>
                <?php
                while ($donnees = $reponse->fetch()) {
                ?>
                    <p>
                        <?php echo $donnees['nom_ue']; ?><br />
                    </p>
                <?php
                }
                // Termine le traitement de la requête
                $reponse->closeCursor(); 
            
                /********** LISTE DES UES RECOMMANDEES **********/
                //Préparation de la requête pour sélectionner les UES recommandées
                $reponse = $bdd->prepare("SELECT * FROM ue_recommandee WHERE ID_parcours = ? AND semestre = ?");
                $reponse->bindParam(1, $_SESSION['ID_parcours']);
                $reponse->bindParam(2, $_SESSION['semestre']);   
                //Lancement de la requête
                $reponse->execute();
                //Affichage des UES Obligatoires
                ?>
                <h2>Liste des UES Recommandées</h2>
                <?php
                while ($donnees = $reponse->fetch()) {
                ?>
                    <p>
                        <?php echo $donnees['nom_ue']; ?><br />
                    </p>
                <?php
                }
                // Termine le traitement de la requête
                $reponse->closeCursor(); 
                
                
                /********** AFFICHAGE DU NOMBRE MAX D'UES AUTORISEES ***********/
                //Préparation de la requête pour sélectionner le nombre max d'ues autorisées
                $reponse = $bdd->prepare("SELECT * FROM parcours WHERE ID_parcours = ?");
                $reponse->bindParam(1, $_SESSION['ID_parcours']);
                //Lancement de la requête
                $reponse->execute();
                //Affichage des UES Obligatoires
                ?>
                <h2>Nombre maximum d'UES autorisées</h2>
                <?php
                while ($donnees = $reponse->fetch()) {
                ?>
                    <p>
                        <?php echo $donnees['nb_ues_s1']; ?><br />
                    </p>
                <?php
                }
                // Termine le traitement de la requête
                $reponse->closeCursor();
            ?>
        </div>                    
    </body>
</html>
