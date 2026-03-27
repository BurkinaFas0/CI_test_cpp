pipeline {
    agent any
    
    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        
        stage('Check compiler version') {
            steps {
                sh '''
                    g++ --version
                    make --version
                '''
            }
        }
        
        stage('Build') {
            steps {
                sh '''
                    cd build
                    make
                '''
            }
        }
        
        stage('Test') {
            steps {
                sh '''
                    cd build
                    make test
                '''
            }
        }
    }
    
    post {
        always {
            archiveArtifacts artifacts: '*.log, test_output.txt', allowEmptyArchive: true
        }
    }
}