/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "MetaLog.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

MetaLog::MetaLog()
{
    m_Import_log = U("");
    
}

MetaLog::~MetaLog()
{
}

void MetaLog::validate() 
{
    // TODO: implement validation
}

web::json::value MetaLog::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("import_log")] = ModelBase::toJson(m_Import_log);
    

    return val;
}

void MetaLog::fromJson(web::json::value& val)
{
    setImportLog(ModelBase::stringFromJson(val[U("import_log")]));
    
}

void MetaLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("import_log"), m_Import_log));
    
}

void MetaLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setImportLog(ModelBase::stringFromHttpContent(multipart->getContent(U("import_log"))));
    
}
    
   
utility::string_t MetaLog::getImportLog() const
{
	return m_Import_log;
}
void MetaLog::setImportLog(utility::string_t value)
{
	m_Import_log = value;
    
}

}
}
}
}
