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



#include "TaskConnector.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

TaskConnector::TaskConnector()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_Type = U("");
    m_AttributesIsSet = false;
    
}

TaskConnector::~TaskConnector()
{
}

void TaskConnector::validate() 
{
    // TODO: implement validation
}

web::json::value TaskConnector::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_AttributesIsSet)
    {
        val[U("attributes")] = ModelBase::toJson(m_Attributes);
    }
    

    return val;
}

void TaskConnector::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
                
    }
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("attributes")))
    {
        if(!val[U("attributes")].is_null()) 
        {
            std::shared_ptr<TaskConnector_attributes> newItem(new TaskConnector_attributes());
            newItem->fromJson(val[U("attributes")]);
            setAttributes( newItem );
        }
                
    }
    
}

void TaskConnector::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_AttributesIsSet)
    {
        if (m_Attributes.get())
        {
            m_Attributes->toMultipart(multipart, U("attributes."));
        }
                
    }
    
}

void TaskConnector::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
                
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("attributes")))
    {
        if(multipart->hasContent(U("attributes")))
        {
            std::shared_ptr<TaskConnector_attributes> newItem(new TaskConnector_attributes());
            newItem->fromMultiPart(multipart, U("attributes."));
            setAttributes( newItem );
        }
                
    }
    
}
    
   
utility::string_t TaskConnector::getId() const
{
	return m_Id;
}
void TaskConnector::setId(utility::string_t value)
{
	m_Id = value;
    m_IdIsSet = true;
}
bool TaskConnector::idIsSet() const
{
    return m_IdIsSet;
}
void TaskConnector::unsetId() 
{
    m_IdIsSet = false;
}
utility::string_t TaskConnector::getType() const
{
	return m_Type;
}
void TaskConnector::setType(utility::string_t value)
{
	m_Type = value;
    
}
std::shared_ptr<TaskConnector_attributes> TaskConnector::getAttributes() const
{
	return m_Attributes;
}
void TaskConnector::setAttributes(std::shared_ptr<TaskConnector_attributes> value)
{
	m_Attributes = value;
    m_AttributesIsSet = true;
}
bool TaskConnector::attributesIsSet() const
{
    return m_AttributesIsSet;
}
void TaskConnector::unsetAttributes() 
{
    m_AttributesIsSet = false;
}

}
}
}
}

