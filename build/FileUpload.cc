//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "FileUpload.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
using namespace drogon;
std::string FileUpload::genText(const DrTemplateData& FileUpload_view_data)
{
	drogon::OStringStream FileUpload_tmp_stream;
	std::string layoutName{""};
	FileUpload_tmp_stream << "<!DOCTYPE html>\n";
	FileUpload_tmp_stream << "<html>\n";
	FileUpload_tmp_stream << "<head>\n";
	FileUpload_tmp_stream << "    <meta charset=\"UTF-8\">\n";
	FileUpload_tmp_stream << "    <title>Rolo Compressor</title>\n";
	FileUpload_tmp_stream << "    <script type=\"text/javascript\">\n";
	FileUpload_tmp_stream << "        var xhr;\n";
	FileUpload_tmp_stream << "        //File uploading method\n";
	FileUpload_tmp_stream << "        function UpladFile() {\n";
	FileUpload_tmp_stream << "            var fileObj = document.getElementById(\"file\").files[0]; // js get file object\n";
	FileUpload_tmp_stream << "            var url =  \"/upload_endpoint\"; \n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            var form = new FormData(); // FormData object\n";
	FileUpload_tmp_stream << "            form.append(\"file\", fileObj); // File object\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr = new XMLHttpRequest();  // XMLHttpRequest object\n";
	FileUpload_tmp_stream << "            xhr.open(\"post\", url, true); //post\n";
	FileUpload_tmp_stream << "            xhr.onload = uploadComplete; \n";
	FileUpload_tmp_stream << "            xhr.onerror =  uploadFailed; \n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr.upload.onprogress = progressFunction;\n";
	FileUpload_tmp_stream << "            xhr.upload.onloadstart = function(){\n";
	FileUpload_tmp_stream << "                ot = new Date().getTime();\n";
	FileUpload_tmp_stream << "                oloaded = 0;\n";
	FileUpload_tmp_stream << "            };\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr.send(form); \n";
	FileUpload_tmp_stream << "        }\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "        function UpladFile2() {\n";
	FileUpload_tmp_stream << "            var fileObj = document.getElementById(\"file2\").files[0]; // js get file object\n";
	FileUpload_tmp_stream << "            var url =  \"/upload_endpoint\"; \n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            var form = new FormData(); // FormData object\n";
	FileUpload_tmp_stream << "            form.append(\"file2\", fileObj); // File object\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr = new XMLHttpRequest();  // XMLHttpRequest object\n";
	FileUpload_tmp_stream << "            xhr.open(\"post\", url, true); //post\n";
	FileUpload_tmp_stream << "            xhr.onload = uploadComplete2; \n";
	FileUpload_tmp_stream << "            xhr.onerror =  uploadFailed; \n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr.upload.onprogress = progressFunction2;\n";
	FileUpload_tmp_stream << "            xhr.upload.onloadstart = function(){\n";
	FileUpload_tmp_stream << "                ot = new Date().getTime();\n";
	FileUpload_tmp_stream << "                oloaded = 0;\n";
	FileUpload_tmp_stream << "            };\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "            xhr.send(form); \n";
	FileUpload_tmp_stream << "        }\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "        function uploadComplete(evt) {\n";
	FileUpload_tmp_stream << "            var data = evt.target.responseText;\n";
	FileUpload_tmp_stream << "            if(data == \"Extensão não suportada!\"){\n";
	FileUpload_tmp_stream << "                alert(\"Extensão não suportada!\");\n";
	FileUpload_tmp_stream << "            }else{\n";
	FileUpload_tmp_stream << "                window.location.replace(\"http://127.0.0.1:5055/baixarBin/\" + data);\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "        }\n";
	FileUpload_tmp_stream << "        function uploadComplete2(evt) {\n";
	FileUpload_tmp_stream << "            var data = evt.target.responseText;\n";
	FileUpload_tmp_stream << "            if(data == \"Extensão não suportada!\"){\n";
	FileUpload_tmp_stream << "                alert(\"Extensão não suportada!\");\n";
	FileUpload_tmp_stream << "            }else{\n";
	FileUpload_tmp_stream << "                window.location.replace(\"http://127.0.0.1:5055/baixarTxt/\" + data);\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "        }\n";
	FileUpload_tmp_stream << "        \n";
	FileUpload_tmp_stream << "        function uploadFailed(evt) {\n";
	FileUpload_tmp_stream << "            alert(\"O envio falhou!\");\n";
	FileUpload_tmp_stream << "        }\n";
	FileUpload_tmp_stream << "        \n";
	FileUpload_tmp_stream << "        function cancleUploadFile(){\n";
	FileUpload_tmp_stream << "            xhr.abort();\n";
	FileUpload_tmp_stream << "        }\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "        function progressFunction(evt) {\n";
	FileUpload_tmp_stream << "            var progressBar = document.getElementById(\"progressBar\");\n";
	FileUpload_tmp_stream << "            var percentageDiv = document.getElementById(\"percentage\");\n";
	FileUpload_tmp_stream << "            if (evt.lengthComputable) {//\n";
	FileUpload_tmp_stream << "                progressBar.max = evt.total;\n";
	FileUpload_tmp_stream << "                progressBar.value = evt.loaded;\n";
	FileUpload_tmp_stream << "                percentageDiv.innerHTML = Math.round(evt.loaded / evt.total * 100) + \"%\";\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            var time = document.getElementById(\"time\");\n";
	FileUpload_tmp_stream << "            var nt = new Date().getTime();\n";
	FileUpload_tmp_stream << "            var pertime = (nt-ot)/1000; \n";
	FileUpload_tmp_stream << "            ot = new Date().getTime(); \n";
	FileUpload_tmp_stream << "            var perload = evt.loaded - oloaded; \n";
	FileUpload_tmp_stream << "            oloaded = evt.loaded;\n";
	FileUpload_tmp_stream << "            var speed = perload/pertime;\n";
	FileUpload_tmp_stream << "            var bspeed = speed;\n";
	FileUpload_tmp_stream << "            var units = 'b/s';\n";
	FileUpload_tmp_stream << "            if(speed/1024>1){\n";
	FileUpload_tmp_stream << "                speed = speed/1024;\n";
	FileUpload_tmp_stream << "                units = 'k/s';\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            if(speed/1024>1){\n";
	FileUpload_tmp_stream << "                speed = speed/1024;\n";
	FileUpload_tmp_stream << "                units = 'M/s';\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            speed = speed.toFixed(1);\n";
	FileUpload_tmp_stream << "            var resttime = ((evt.total-evt.loaded)/bspeed).toFixed(1);\n";
	FileUpload_tmp_stream << "            time.innerHTML = ', Velocidade: '+speed+units+', tempo restante: '+resttime+'s';\n";
	FileUpload_tmp_stream << "            if(bspeed==0) time.innerHTML = 'Upload cancelled';\n";
	FileUpload_tmp_stream << "        }\n";
	FileUpload_tmp_stream << "        function progressFunction2(evt) {\n";
	FileUpload_tmp_stream << "            var progressBar = document.getElementById(\"progressBar2\");\n";
	FileUpload_tmp_stream << "            var percentageDiv = document.getElementById(\"percentage2\");\n";
	FileUpload_tmp_stream << "            if (evt.lengthComputable) {//\n";
	FileUpload_tmp_stream << "                progressBar.max = evt.total;\n";
	FileUpload_tmp_stream << "                progressBar.value = evt.loaded;\n";
	FileUpload_tmp_stream << "                percentageDiv.innerHTML = Math.round(evt.loaded / evt.total * 100) + \"%\";\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            var time = document.getElementById(\"time2\");\n";
	FileUpload_tmp_stream << "            var nt = new Date().getTime();\n";
	FileUpload_tmp_stream << "            var pertime = (nt-ot)/1000; \n";
	FileUpload_tmp_stream << "            ot = new Date().getTime(); \n";
	FileUpload_tmp_stream << "            var perload = evt.loaded - oloaded; \n";
	FileUpload_tmp_stream << "            oloaded = evt.loaded;\n";
	FileUpload_tmp_stream << "            var speed = perload/pertime;\n";
	FileUpload_tmp_stream << "            var bspeed = speed;\n";
	FileUpload_tmp_stream << "            var units = 'b/s';\n";
	FileUpload_tmp_stream << "            if(speed/1024>1){\n";
	FileUpload_tmp_stream << "                speed = speed/1024;\n";
	FileUpload_tmp_stream << "                units = 'k/s';\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            if(speed/1024>1){\n";
	FileUpload_tmp_stream << "                speed = speed/1024;\n";
	FileUpload_tmp_stream << "                units = 'M/s';\n";
	FileUpload_tmp_stream << "            }\n";
	FileUpload_tmp_stream << "            speed = speed.toFixed(1);\n";
	FileUpload_tmp_stream << "            var resttime = ((evt.total-evt.loaded)/bspeed).toFixed(1);\n";
	FileUpload_tmp_stream << "            time.innerHTML = ', Velocidade: '+speed+units+', tempo restante: '+resttime+'s';\n";
	FileUpload_tmp_stream << "            if(bspeed==0) time.innerHTML = 'Upload cancelled';\n";
	FileUpload_tmp_stream << "        }\n";
	FileUpload_tmp_stream << "    </script>\n";
	FileUpload_tmp_stream << "</head>\n";
	FileUpload_tmp_stream << "<body>\n";
	FileUpload_tmp_stream << "<div style=\"text-align: center; padding-top: 50px\">\n";
	FileUpload_tmp_stream << "<h1>Compactar TXT</h1>\n";
	FileUpload_tmp_stream << "<progress id=\"progressBar\" value=\"0\" max=\"100\" style=\"width: 300px;\"></progress>\n";
	FileUpload_tmp_stream << "<span id=\"percentage\"></span><span id=\"time\"></span>\n";
	FileUpload_tmp_stream << "<br /><br />\n";
	FileUpload_tmp_stream << "<input type=\"file\" id=\"file\" name=\"myfile\" />\n";
	FileUpload_tmp_stream << "<input type=\"button\" onclick=\"UpladFile()\" value=\"Enviar\" />\n";
	FileUpload_tmp_stream << "<input type=\"button\" onclick=\"cancleUploadFile()\" value=\"Cancelar\" />\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "</div>\n";
FileUpload_tmp_stream<<"\n";
	FileUpload_tmp_stream << "<div style=\"text-align: center; padding-top: 50px\">\n";
	FileUpload_tmp_stream << "<h1>Descompactar BIN</h1>\n";
	FileUpload_tmp_stream << "<progress id=\"progressBar2\" value=\"0\" max=\"100\" style=\"width: 300px;\"></progress>\n";
	FileUpload_tmp_stream << "<span id=\"percentage2\"></span><span id=\"time2\"></span>\n";
	FileUpload_tmp_stream << "<br /><br />\n";
	FileUpload_tmp_stream << "<input type=\"file\" id=\"file2\" name=\"myfile\" />\n";
	FileUpload_tmp_stream << "<input type=\"button\" onclick=\"UpladFile2()\" value=\"Enviar\" />\n";
	FileUpload_tmp_stream << "<input type=\"button\" onclick=\"cancleUploadFile()\" value=\"Cancelar\" />\n";
	FileUpload_tmp_stream << "</div>\n";
	FileUpload_tmp_stream << "<div style=\"text-align: center; padding-top: 50px\">\n";
	FileUpload_tmp_stream << "<h3>***Atenção, não compensa compactar arquivos com menos de 300 bytes!***</h3>\n";
	FileUpload_tmp_stream << "</div>\n";
	FileUpload_tmp_stream << "</body>\n";
	FileUpload_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(FileUpload_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = FileUpload_view_data;
auto str = std::move(FileUpload_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
