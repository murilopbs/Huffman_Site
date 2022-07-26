# Huffman_Site
Site em C++ que usa a compressão de Huffman para transformar .txt em .bin
# Sobre
O algortimo de Huffman possui uma complexidade O(nlogn), podendo, dependendo do tamanho do arquivo, demorar muito. Por isso, usar uma linguagem mais demorada (como o Python) e um framework com pouco aproveitamento de desempenho (como o Flask/Django) não é muito proveitoso. Como o usuário não quer algo muito sofisticado, apenas compactar/descompactar seu arquivo, então, usar uma linguagem e um Framework web com foco no desempenho é a melhor opção. Para isso o C++ foi a escolha certa por ser uma linguagem rápida e já consolidada. O Framework escolhido foi o Drogon, o motivo foi simples: ele conseguiu o simples feito de marcar 100% no teste de performance, não acredita? Veja: https://www.techempower.com/benchmarks/#section=data-r19&hw=ph&test=composite

# Instalação
- Inicialmente vamos baixar o drogon. Em sistemas com APT, use o comando:
> $ sudo apt install git gcc g++ cmake libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev
- Em sistemas com Portage, use o comando:
> $ sudo emerge dev-vcs/git jsoncpp ossp-uuid openssl
- Em sistemas com RPM, use o comando:
> $ sudo dnf install git gcc gcc-c++ cmake libuuid-devel openssl-devel zlib-devel 
- Em sistemas windows... Deixa pra lá, você nem deve saber programar em C++ rs;<br/>
- Vamos baixar o Framework drogon, use o comando:
> $ git clone https://github.com/an-tao/drogon && cd drogon
- Baixe os submódulos:
> $ git submodule update --init
- Crie uma pasta para o build e entre na pasta:
> $ mkdir build && cd build
- Compile
> $ cmake .. && $ make && sudo make install
- Entre no diretório build, compile, gere o executável e rode o programa
- Entre no build dentro do diretório rolo
> $ cd build && cmake .. && make && ./rolo
- Agora é só digitar no seu navegador o endereço 127.0.0.1:5055

# Como usar
Após entrar no endereço 127.0.0.1:5055 faça o upload do seu arquivo txt na aba "Compactar TXT" e depois clique em enviar. Após ser gerado o binário, uma opção de onde você deseja salvar o novo arquivo aparecerá (dependendo do seu navegador, o arquivo será baixado direto no diretório downloads).
Você perceberá que o arquivo terá sido reduzido em mais ou menos 45%.
Para descompactar faça o mesmo procedimento descrito acima, porém, na aba "Descompactar BIN", adicione o arquivo bin.

# Dúvidas/Contato
Qualquer dúvida sobre o código ou sobre o Framework mandar email para: murilopbsouto@gmail.com
